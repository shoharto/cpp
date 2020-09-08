
/*===*===*===*===*===*===*===*===*===*===*===*===*===*
PROGRAMING TECHNIQUE II                              =
E-commerce Shopping System                           *
Group Members:                                       =
Bayes Ahmed Shoharto (A18CS4051)                     *
Ahmad Samman (A17CS4013)                             =
Md Shakil Chowdhury (A18CS4047)                      =
===*===*===*===*===*===*===*===*===*===*===*===*====*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

fstream buyerFile;     // File to store Buyer Login info
fstream orderReceived; // File to store recieved orders history
fstream productFile;   // File to store product info for sale

class Product
{
private:
    string productName;
    double productPrice;
    int productQuantity;

public:
    Product(string _productName)
    {
        productName = _productName;
        cout << productName << endl;
    }

    Product(string _productName, double _productPrice, int _productQuantity)
    {
        productName = _productName;
        productPrice = _productPrice;
        productQuantity = _productQuantity;
    }

    void setProductName(string _productName)
    {
        productName = _productName;
    }

    string getProductName()
    {
        return productName;
    }

    double getProductPrice()
    {
        return productPrice;
    }

    int getProductQuantity()
    {
        return productQuantity;
    }

    bool productSearch()
    { // Function to search the product file and return whether product is avaiilable or not
        string dummyProductName;
        double dummyProductPrice; // Temporary variables to hold data for searching
        int dummyProductQuantity;

        productFile.open("productList.txt");
        while (productFile >> dummyProductName >> dummyProductQuantity >> dummyProductPrice)
        { // reading through the file line by line
            if (dummyProductName.compare(productName))
                continue; //If matching product is found

            cout << "Product name\t\t"
                 << "Quantity\t"
                 << "Price" << endl;
            cout << dummyProductName << "\t\t\t" << dummyProductQuantity << "\t\t" << dummyProductPrice << endl; // print found product details
            productQuantity = dummyProductQuantity;
            productPrice = dummyProductPrice;
            productFile.close();
            return true;
        }
        cout << "Product Not Found" << endl;
        productFile.close(); //  executed if product not in file
        return false;
    }

    bool addingProduct()
    {
        string dummyName;
        double dummyPrice;
        int dummyQuantity;

        productFile.open("productList.txt");
        while (productFile >> dummyName >> dummyQuantity >> dummyPrice)
        {
            if (dummyName.compare(productName) != 0)
                continue; // Check to ensure products are not duplicated

            cout << "Product Already Exists" << endl;
            productFile.close();
            return true;
        }
        productFile.close();
        productFile.open("productList.txt", ios::in | ios::app);
        productFile << productName << " " << productQuantity << " " << productPrice << endl;
        productFile.close();
        return false;
    }
};

class Admin
{ // Base class for Seller and Buyer
private:
    string userName;
    string userPass;

public:
    Admin(string _userName, string _UserPass)
    {
        userName = _userName;
        userPass = _UserPass;
    }

    bool userValidity(int check)
    { // Function to check whether login details are correct
        string sellerUser = "seller";
        string sellerPass = "abc123";
        string dummyUser, dummyPass;

        if (check == 1)
        {
            buyerFile.open("buyerLoginDetails.txt"); // if entered data is correct
            while (buyerFile >> dummyUser >> dummyPass)
            {
                if (dummyUser.compare(userName) != 0)
                    continue;

                buyerFile.close();
                return true;
            }
            buyerFile.close();
            return false; // if entered data is incorrect
        }
        else if (check == 2)
        {
            buyerFile.open("buyerLoginDetails.txt");
            while (buyerFile >> dummyUser >> dummyPass)
            {
                if (dummyUser.compare(userName) != 0 && dummyPass.compare(userPass) != 0)
                    continue;

                buyerFile.close();
                return true;
            }
            buyerFile.close();
            return false;
        }
        else if (check == 3)
        {
            return sellerUser.compare(userName) != 0 && sellerPass.compare(userPass) != 0;
        }
        return false;
    }

    void updateLoginDetails(int check)
    { // Function that adds new buyer login details after account creation
        buyerFile.open("buyerLoginDetails.txt", ios::in | ios::app);
        buyerFile << userName << " " << userPass << "\n";
        buyerFile.close();
    }

    void receivedOrders(string buyerName, string productName, int quantity, double totalPaid)
    { // Function updates the order received files after an order has been placed
        orderReceived.open("orderReceived.txt", ios::in | ios::app);
        orderReceived << buyerName << " " << productName << " " << quantity << " " << totalPaid << "\n";
        orderReceived.close();
    }

    void showProducts()
    {
        string dummyProductName;
        int dummyProductQuantity; // Displays available products for sale
        double dummyProductPrice;

        productFile.open("productList.txt", ios::in);
        cout << "Product name\t\t"
             << "Quantity\t"
             << "Price" << endl;
        while (productFile >> dummyProductName >> dummyProductQuantity >> dummyProductPrice)
        {
            cout << dummyProductName << "\t\t\t" << dummyProductQuantity << "\t\t" << dummyProductPrice << endl;
        }
        productFile.close();
    }

    virtual void printPanel() {} // polymorphism ( prints panel for Seller and Buyer respectively according to the class)
};

class Seller : public Admin //Inheritance
{
private:
    string sellerUserName;
    string sellerUserPass;
    Product *_product;

public:
    Seller(string _sellerUserName, string _sellerUserPass) : Admin(_sellerUserName, _sellerUserPass)
    {
        sellerUserName = _sellerUserName;
        sellerUserPass = _sellerUserPass;
    }

    void printPanel()
    { // prints panel for seller
        char option;

        do
        {
            system("cls");
            cout << "SELLER PANEL" << endl
                 << endl;
            cout << "1. Add Product" << endl;
            cout << "2. Show Received Orders" << endl;
            cout << "3. Sign Out" << endl
                 << endl;
            cout << "Press 1, 2 or 3 to select option: ";
            cin >> option;

            if (option == '1')
            {
                addProduct();
                cout << "Product successfully added" << endl;
                cout << endl;
                cout << "Press 'b' to go back: ";
                cin >> option;
            }
            else if (option == '2')
            {
                showOrders(); // shows orders received for the seller
                cout << endl;
                cout << "Press 'b' to go back: ";
                cin >> option;
            }
            else if (option == '3')
            {
                cout << "Successfully signed out" << endl;
            }
        } while (option == 'b');
    }

    void addProduct()
    {
        string _productName;
        double _productPrice;
        int _productQuantity;

        system("cls"); // clears the console for cleaner aesthetic
        cout << "ADD PRODUCT" << endl
             << endl;
        cout << "Enter Product Name: ";
        cin >> _productName;
        cout << "Enter Product Price: ";
        cin >> _productPrice;
        cout << "Enter Product Quantity: ";
        cin >> _productQuantity;

        _product = new Product(_productName, _productPrice, _productQuantity);
        _product->addingProduct();
        cout << endl;
    }

    void showOrders()
    { // Function that shows the orders received by the seller
        string dummyName;
        string dummyProductName;
        int dummyQuantity;
        double dummyPrice;

        system("cls");
        cout << "ORDER RECEIVED" << endl
             << endl;
        orderReceived.open("orderReceived.txt");
        while (orderReceived >> dummyName >> dummyProductName >> dummyQuantity >> dummyPrice)
        { // Reading through the file to print out the order ony by one

            cout << "=======================" << endl;
            cout << "Buyer Name: " << dummyName << endl
                 << endl;
            cout << "Product Name: " << dummyProductName << endl;
            cout << "Quantity: " << dummyQuantity << endl;
            cout << "Total Paid: " << dummyPrice << endl;
            cout << "=======================" << endl
                 << endl;
        }
        orderReceived.close();
    }
};

class Buyer : public Admin //Inheritance
{
private:
    string buyerUserName;
    string buyerUserPass;
    Product *_product; //Aggregation

public:
    Buyer(string _buyerUserName, string _buyerUserPass) : Admin(_buyerUserName, _buyerUserPass)
    {
        buyerUserName = _buyerUserName;
        buyerUserPass = _buyerUserPass;
        _product = new Product("", 0, 0);
    }

    void printPanel()
    { // prints buyer panel
        char option;

        do
        {
            system("cls");
            cout << "BUYER PANEL" << endl
                 << endl;
            cout << "1. Product List" << endl;
            cout << "2. Search Product and Buy" << endl;
            cout << "3. Sign Out" << endl
                 << endl;
            cout << "Press 1, 2 or 3 to select option: ";
            cin >> option;

            if (option == '1')
            {
                system("cls");
                cout << "PRODUCT LIST" << endl
                     << endl;
                showProducts();
                cout << endl;
                cout << "Press 'b' to go back: ";
                cin >> option;
            }
            else if (option == '2')
            {
                string _searchProduct;

                system("cls");
                cout << "SEARCH AND BUY" << endl
                     << endl;
                cout << "Enter Product Name: ";
                cin >> _searchProduct;
                _product->setProductName(_searchProduct);
                cout << endl;
                if (_product->productSearch())
                {
                    cout << endl;
                    addToCart();
                }
                cout << endl;
                cout << "Press 'b' to go back: ";
                cin >> option;
            }
            else if (option == '3')
            {
                cout << "Successfully signed out" << endl;
            }
        } while (option == 'b');
    }

    void addToCart()
    { // Function that lets user buy a product thats for sale
        int quantity;
        double amount;
        double change;
        double total;

        cout << "Your selected product is: " << _product->getProductName() << endl
             << endl;
        cout << "Enter the quantity: ";
        cin >> quantity;
        cout << endl;
        if (quantity > _product->getProductQuantity()) // Check to ensure product ordered does not exceed stock
            cout << "Product quantity exceed" << endl;
        else
        {
            total = _product->getProductPrice() * quantity;
            cout << "Enter amount: ";
            cin >> amount; // Simulation of E commerce payment ( Just a demonstration system of payment for demo purposes

            if (amount < total)
                cout << "Not enough money" << endl; // If insufficient money amount is entered
            else
            {
                change = amount - total; //Calculating change to return
                orderDetails(quantity, amount, total, change);
            }
        }
    }

    void orderDetails(int quantity, double amount, double total, double change)
    { // Function provides a summary of items bought in the session
        system("cls");
        cout << "ORDER CONFIRMATION" << endl
             << endl;
        cout << "======================" << endl;
        cout << "Your order details" << endl
             << endl;
        cout << "Product: " << _product->getProductName() << endl;
        cout << "Price: " << _product->getProductPrice() << endl;
        cout << "Quantity " << quantity << endl
             << endl;
        cout << "Payment details" << endl
             << endl;
        cout << "Amount given: " << amount << endl;
        cout << "Your change: " << change << endl;
        cout << "======================" << endl
             << endl;
        cout << "Thanks For Shopping" << endl;

        receivedOrders(buyerUserName, _product->getProductName(), quantity, total);
    }
};

int startingPrintDetails()
{ // Function that prints the first menu screen and takes the choices for further progression
    char selectOption;
    char selectAccountType;

    cout << "\t\tE-commerce Shopping System" << endl;
    cout << "======================================================" << endl
         << endl;
    cout << "1. Create a buyer account." << endl;
    cout << "2. Login" << endl;
    cout << "3. Quit" << endl
         << endl;
    do
    {
        cout << "Press 1, 2 or 3 to select an option: ";
        cin >> selectOption;
    } while (selectOption != '1' && selectOption != '2' && selectOption != '3' &&
             cout << "Invalid Input. Try Again!" << endl
                  << endl);
    cout << endl;

    if (selectOption == '2')
    {
        cout << "a. Buyer Account" << endl;
        cout << "b. Seller Account" << endl
             << endl;
        do
        {
            cout << "Choose Account Type(a or b): ";
            cin >> selectAccountType;
        } while (selectAccountType != 'a' && selectAccountType != 'b' &&
                 cout << "Invalid Input. Try Again!" << endl
                      << endl);
    }

    if (selectOption == '1')
        return 1;
    else if (selectOption == '2' && selectAccountType == 'a')
        return 2;
    else if (selectOption == '2' && selectAccountType == 'b')
        return 3;

    return 0;
}

void printAccountAuthentication(string &_userName, string &_userPass)
{ // Function prints the Login screen
    cout << "User Name: ";
    cin >> _userName;
    cout << "User Pass: ";
    cin >> _userPass;
}

int main()
{

    int selectedOption, validity; // Initializing all variables
    char back;                    // used to indicate going 1 step back in the menu
    string userName, userPass;
    Admin *_admin;
    bool check = false;

    do
    {
        back = '0';
        selectedOption = startingPrintDetails();

        if (selectedOption == 1)
        {
            system("cls");
            cout << "BUYER ACCOUNT CREATION" << endl
                 << endl;
            do
            {
                printAccountAuthentication(userName, userPass);
                _admin = new Admin(userName, userPass); //create new admin

                validity = _admin->userValidity(selectedOption); //check validation

                try
                {
                    if (validity == 0)
                    {
                        _admin->updateLoginDetails(selectedOption);
                        cout << endl
                             << "Account successfully created!" << endl;
                        check = true;
                    }
                    else
                        throw validity;
                }
                catch (int x)
                {
                    cout << "Username Already Exists. Try again!" << endl
                         << endl;
                }
            } while (!check);
            cout << endl;
            cout << "Press 'b' to go back: ";
            cin >> back;
            system("cls");
        }
        else if (selectedOption == 2)
        {
            system("cls");
            cout << "ACCOUNT LOGIN" << endl
                 << endl;
            do
            {
                printAccountAuthentication(userName, userPass);
                Buyer _buyer(userName, userPass);
                _admin = &_buyer;

                validity = _admin->userValidity(selectedOption); // Checking account validity

                try
                {
                    if (validity == 1)
                    {
                        _admin->printPanel();
                        check = true;
                    }
                    else
                        throw validity;
                }
                catch (int x)
                {
                    cout << "Invalid Buyer Login. Try again!" << endl
                         << endl;
                }
            } while (!check);
        }
        else if (selectedOption == 3)
        {
            system("cls");
            cout << "ACCOUNT LOGIN" << endl
                 << endl;
            do
            {
                printAccountAuthentication(userName, userPass);
                Seller _seller(userName, userPass);
                _admin = &_seller;

                validity = _admin->userValidity(selectedOption);

                try
                {
                    if (validity == 0)
                    {
                        _admin->printPanel();
                        check = true;
                    }
                    else
                        throw validity;
                }
                catch (int x)
                {
                    cout << "Invalid Seller Login. Try again!" << endl
                         << endl;
                }
            } while (!check);
        }
    } while (back == 'b');

    return 0;
}