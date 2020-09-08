/*
Program 7.3
Bayes Ahmed Shoharto
A18CS4051
*/

#include <iostream>
using namespace std;

class Address
{
private:
    string street;
    string town;
    string zip;

public:
    Address(string street, string town, string zip);
    string getFullAddress();
};

Address::Address(string street, string town, string zip)
{
    this->street = street;
    this->town = town;
    this->zip = zip;
}

string Address::getFullAddress()
{
    return street + "\n" + town + "\n" + zip;
}

class Student
{
private:
    string firstname;
    string lastname;
    Address *home;

public:
    Student(string firstname, string lastname, Address *homeAddress);
    void print();
};

Student::Student(string firstname, string lastname, Address *homeAddress)
{
    this->firstname = firstname;
    this->lastname = lastname;
    home = homeAddress;
}

void Student::print()
{
    cout << firstname << "\t" << lastname << "\n"
         << home->getFullAddress() << "\n";
}

int main()
{
    Address *add = new Address("Jalan Indah 18/1", "Johor Bahru", "81200");

    Student stu1("Aini", "Ahmad", add);
    stu1.print();
    return 0;
}
