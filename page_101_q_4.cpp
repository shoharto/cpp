/*
Bayes Ahmed Shoharto
A18CS4051
*/

#include <iomanip>
#include <iostream>

using namespace std;

class autom
{
private:
    string make;

protected:
    int model;

public:
    double price;

    autom()
    {
        make = "";
        model = 0;
        price = 0.0;
        cout << "An Automobile object has been created but "
             << "not yet have details." << endl;
    }

    autom(string a, int b, double c)
    {
        make = a;
        model = b;
        price = c;
        cout << "Automobile object: " << make << " make in " << model << " .The price is RM " << price << "." << endl;
    }

    void printinfo()
    {
    }
};

class car : private autom
{
private:
    int doors;

public:
    car() : autom("BMW", 2010, 150000.0)
    {
        doors = 0;
        cout << "Car with cars's make, year model and price "
             << "(\"BMW\",2010,150000.0) accordingly." << endl;
    }

    car(string a, int b, double c, int d) : autom(a, b, c)
    {
        doors = d;
        cout << a << "'s car has " << d << " doors." << endl;
    }

    void printcar()
    {
    }
};

class truck : protected car
{
protected:
    string driveType;

public:
    truck(string d) : car("Toyota", 2014, 45000.0, 4)
    {
        driveType = d;
        cout << "THis is the truck with " << d << " drive type." << endl;
    }
    void printtruck()
    {
    }
};

int main()

{
    cout << fixed << setprecision(2);
    car Car;
    truck Truck("4WD");
    autom automo;
    return 0;
}
