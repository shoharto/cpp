////////////////////////////////////////////////////////////////////////////////
// Faculty of Computing, Universiti Teknologi Malaysia
// SECJ/SCSJ1023 - Programming Technique II
// Semester 2, 2019/2020
// Final Exam, Problem Solving
// Template File
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

#define DISC 15 //Discount rate 
#define SIZE 50 //The max number of sales
using namespace std;

//----------------------------------
// The Date class is FULLY given
class Date
{
	private:
		int day, month, year;

	public:
		void readDate()
		{
			char ch;
			cout << "Date [dd-mm-yyyy]: ";
			cin >> day >> ch >> month >> ch >> year;
		}

		void dispDate()
		{
			if (day < 10)
				cout << "0";
			cout << day << "-";

			if (month < 10)
				cout << "0";
			cout << month << "-" << year;
		}
};


//----------------------------------
// The Time class is FULLY given
class Time
{
	private:
		int hour, minute;


	public:
		void readTime()
		{
			char ch;
			cout << "Time [hour:min] using 24-hour format: ";
			cin >> hour >> ch >> minute; //Using 24-hour format
		}

		void dispTime()
		{
			int hh = hour;

			if (hour > 12)
				hour -= 12;

			if (hour < 10)
				cout << "0";

			cout << hour << ":";

			if (minute < 10)
				cout << "0";
			cout << minute;

			if (hh < 12)
				cout << " am";
			else
				cout << " pm";
		}
};


//----------------------------------
// The Product class is PARTIALLY given
class Product
{
	protected:
		//Complete member variables declaration
		string name;
		double price;

	public:

		//Complete default arguments constructor
		Product (string name = 0, double price = 0)
		{
			this->name = name;
			this->price = price;
		}

		//Complete getName function
		string getName()
		{
			return name;
		}
		
		//TASK 1 (2.5 Marks)
		//TODO: Complete the definition of the Product class

		//Task 1(a): Define the virtual displayDetails function [1.5 marks]
		//___________________________________


		//Task 1(b): Define the pure virtual calcAftDisc function [1 mark]
		//___________________________________
};


//----------------------------------
//Promotion class is PARTIALLY given

//TASK 2 (8 Marks)
//TODO: Complete the definition of the Promotion class

//Task 2(a): Specify the Promotion class as a child of the Product class [1 mark]
//___________________________________

class Promotion 
{
	public:

		//Task 2(b): Define the constructor with arguments [1.5 marks]
		//___________________________________

	
		//Task 2(c): Define the calcDisc function [1.5 marks]
		//___________________________________


		//Task 2(d): Define the calcAftDisc function [1.5 marks]
		//___________________________________


		//Task 2(e): Redefine the displayDetails function [2.5 marks]
		//___________________________________

};


//----------------------------------
//Regular class is PARTIALLY given

//TASK 3 (6 Marks)
//TODO: Complete the definition of the Regular class

//Task 3(a): Specify the Regular class as a child of the Product class [1 mark]
//___________________________________

class Regular 
{
	private:
		string category;

	public:

		//Task 3(b): Define the constructor with arguments [2 marks]
		//___________________________________


		//Task 3(c): Define the calcAftDisc function [1 mark]
		//___________________________________


		//Task 3(d): Redefine the displayDetails function [2 marks]
		//___________________________________
};

//----------------------------------
// The Staff class is PARTIALLY given
class Staff
{
	//TASK 4 (20.5 Marks)
	//TODO: Complete the definition of the Staff class

	private:
		//Task 4(a): Define all the member variables [3.5 marks]
		//___________________________________

	public:
		//Complete default constructor
		Staff()
		{
			numPromos = 0;
			numRegulars = 0;
			numSales = 0;
		}

		//Complete getStaffId function
		string getStaffId()
		{
			return id;
		}

		//Complete getDateTime function
		void getDateTime()
		{
			cout << " (";
			date.dispDate();
			cout << ", ";
			time.dispTime();
			cout << ")";
		}

		//Incomplete readInput function
		void readInput()
		{
			//Task 4(b): Complete the definition of the readInput function [4 marks]
			//___________________________________
		}

		//Incomplete addSales function
		void addSales(Product *p, int qtty)
		{
			//Task 4(c): Complete the definition of the addSales function [3.5 marks]
			//___________________________________

			if (dynamic_cast <Promotion*> (p)) //To check if p is an instance of Promotion
			{
			}
			else
			{
			}
		}

		//Incomplete displayInfoStaff function
		void displayInfoStaff()
		{
			//Task 4(d): Complete the definition of the displayInfoStaff function [3 marks]
 			//___________________________________
		}

		//Incomplete displayInfoSales function
		void displayInfoSales()
		{
			double totalSales = 0, total;

			if (numSales == 0)
				cout << "\nNo sales data!" << endl;
			else
			{
				cout << "\nNumber of All Sales    : " << numSales << endl
					 << "Number of Promotion Sales  : "   << numPromos << endl
					 << "Number of Regular Sales: "   << numRegulars << endl << endl;

				cout << left;
				cout << setw(4)  << "No"
					 << setw(40) << "Description"
					 << setw(16) << "Unit Price(RM)"
					 << setw(14) << "Discount(RM)"
					 << setw(10) << "Quantity"
					 << "Total(RM)" << endl;

				//Task 4(e): Complete the definition of the displayInfoSales function [6.5 marks]
				//___________________________________

				cout << "\nTotal sales = RM" << totalSales
					 << endl << endl;
			}
		}
};

//----------------------------------
// The menu function is FULLY given
int menu()
{
	int task;

	cout << "========== Menu ==========" << endl
		 << "[1] Add Staff" << endl
		 << "[2] Add Product" << endl
		 << "[3] Add Sales" << endl
		 << "[4] Display Sales" << endl
		 << "[5] Exit" << endl
		 << "==========================" << endl
		 << "\nSelect task: ";

	cin >> task;
	cin.ignore();

	return task;
}

//----------------------------------
// The main function is PARTIALLY given
int main()
{
	//Local variables and instances
	char ch;
	int choice1; //Task chosen
	int choice2; //Staff chosen
	int choice3; //Product chosen
	double price;	
	string category, name, type;
	int qtty, numStaff = 0, numProduct = 0;

	Staff staffObj; //Staff object
	Product *productPtr; //Product pointer
	Staff staffList[SIZE]; //Array of Staff objects
	Product *productList[SIZE]; //Array of Product objects

	//TASK 5 (26 Marks)
	//TODO: Complete the definition of the main function

	//Task 5(a): Enter the task chosen [1 mark]
	//___________________________________

	//The process will be repeated if user enter the value in range 1 to 4
	while (choice1 > 0 && choice1 < 5)
	{
		switch (choice1)
		{
			case 1:

				cout << "\n<<< Add Staff >>>" << endl;

				//Task 5(b-i): Enter the details of staff [1 mark]
				//___________________________________


				//Task 5(b-ii): Add the Staff object into the Staff array [1 mark]
				//___________________________________

				numStaff++;
				break;

			case 2:

				cout << "\n<<< Add Product >>>" << endl;

				//Task 5(c-i): Enter the details of product [3 marks]
				//___________________________________


				//Task 5(c-ii): Dynamically allocates a new product (a promotion
				//or regular) object. Use a polymorphic concept. [7 marks]
				//___________________________________
			
				if (type == "Promotion") //To identify the product type
				{
				}
				else
				{
				}

				//Task 5(c-iii): Add the Product object into the Product array [1 mark]
				//___________________________________
				
				numProduct++;
				break;

			case 3:

				//Display an appropriate message if there is no staff or no product
				if ((numProduct == 0) || (numStaff == 0))
				{
					cout << "Sorry!! No staff or product, please add staff or product first..." << endl;
					break;
				}

				cout << "\n<<< Add Sales >>>" << endl
				 	 << "\nStaff list" << endl;

				//Task 5(d-i): Display the list of staffs [2.5 marks]
				//___________________________________

				cout << "\nSelect staff: ";
				cin >> choice2; //To enter the staff chosen

				do
				{
					//To enter the details of sale
					cout << "\n--- Enter Sale Info ---" << endl;
					
					//Task 5(d-ii): Display the list of products [2.5 marks]
					//___________________________________
					
					cout << "\nSelect product: ";
					cin >> choice3; //To enter the product chosen
					cout << "Quantity: ";
					cin >> qtty;
					cin.ignore();
					
					//Task 5(d-iii): Add sales to the selected Staff object [2.5 marks]
					//___________________________________

					cout << "\nPress 'Y' to continue >> ";
					cin >> ch; //To enter a value to continue to add a sales product
					cin.ignore();
					ch = toupper(ch);
				} while (ch == 'Y'); //The process will be continued if user enter the valid input
				break;

			case 4:

				//To display an appropriate message if there is no staff
				if (numStaff == 0)
				{
					cout << "Sorry!! No staff, please add staff first..." << endl;
					break;
				}

				cout << "\n<<< Staff(s) and Sales Info >>>" << endl;
				cout << "\nNumber of Staffs: " << numStaff << endl;

				//Task 5(e): Display the list of sales' details based on the staff [3.5 marks]
				//___________________________________
		} //End switch

		cout << endl;

		//Task 5(f): Enter the task chosen (1 mark)
		//___________________________________
	} //End while

	cout << "Thank you! :)" << endl;
	return 0;
}