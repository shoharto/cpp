/*
Name: Bayes Ahmed Shoharto
Matric Number: A18CS4051
*/

#include <iostream>
using namespace std;

class Mechanic
{
private:
    string name;
    string staffid;
    int hourseworked;
    double rateperhour;
    double salary;

public:
    Mechanic(string n, string id, int hw = 0, double rph = 0.0, double s = 0.0) //constructor
    {
        name = n;
        staffid = id;
        hourseworked = hw;
        rateperhour = rph;
        salary = s;
    }

    string getName() const { return name; } //accessors starts
    string getstaffid() const { return staffid; }
    int getHWorked() const { return hourseworked; }
    double getratePH() const { return rateperhour; }

    double calculateSalary(Mechanic &obj) //for calculating salary
    {
        salary = hourseworked * rateperhour;
        return salary;
    }

    void display()
    {

        cout << "Person Name :\t" << name << endl
             << "Person ID   :\t" << staffid << endl
             << "Hourseworked:\t" << hourseworked << endl
             << "RatePerHour :\t" << rateperhour << endl
             << "Total Salary:\t" << salary << endl;
    }

    friend double calculateEPF(Mechanic &a); //friend function
};

double calculateEPF(Mechanic &a)
{
    return a.salary * 0.05;
}

int main()
{
    Mechanic p1("Shoharto", "A18CS4051", 10.00, 10.00); //initialize values with an object

    p1.calculateSalary(p1); //now the value automically store in Salary

    p1.display(); //display all arguments with salary

    cout << "Total   EPF :\t" << calculateEPF(p1);
    return 0;
}