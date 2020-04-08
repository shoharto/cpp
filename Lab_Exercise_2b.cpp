/*
Name: Bayes Ahmed Shoharto
Matric Number: A18CS4051
*/
#include <iostream>
#include <cstring>
using namespace std;

class Month
{
private:
    string name;
    int monthNumber;

public:
    Month(string n = "", int num = 0)
    {
        name = n;
        monthNumber = num;
    }

    void setName(string n)
    {
        name = n;
    }
    void setmonthNumber(int num)
    {
        monthNumber = num;
    }

    string getName() const { return name; }
    int getMonthnum() const { return monthNumber; }

    string Monthname(int a)
    {
        if (a == 1)
            return "January";
        else if (a == 2)
            return "February";
        else if (a == 3)
            return "March";
        else if (a == 4)
            return "April";
        else if (a == 5)
            return "May";
        else if (a == 6)
            return "Jun";
        else if (a == 7)
            return "July";
        else if (a == 8)
            return "August";
        else if (a == 9)
            return "September";
        else if (a == 10)
            return "October";
        else if (a == 11)
            return "November";
        else if (a == 12)
            return "December";
    }

    Month operator++() //prefix operator
    {
        if (monthNumber == 12)
        {
            monthNumber = 1;
            name = "January";
        }

        else
        {
            ++monthNumber;
            name = Monthname(monthNumber);
        }

        return *this;
    }

    Month operator++(int) //postfix operator
    {
        Month m = *this;
        if (monthNumber == 12)
        {
            monthNumber = 1;
            name = "January";
        }
        else
        {
            monthNumber++;
            name = Monthname(monthNumber);
        }

        return m;
    }
};

int main()
{
    string name;
    int Nummonth;
A:
    cout << "Enter the Number of month(number only): ";
    cin >> Nummonth;
    if (Nummonth > 12)
        goto A;
    cout << "Please Enter the name of the month      : ";
    cin >> name;

    Month box(name, Nummonth); //create an object and store the user input

    cout << "\nBefore any increment: Month Number= " << box.getMonthnum() << "  Month Name= " << box.getName();

    ++box;
    cout << "\nAfter      ++prefix : Month Number= " << box.getMonthnum() << "  Month Name= " << box.getName();

    box++;
    cout << "\nAfter     postfix++ : Month Number= " << box.getMonthnum() << "  Month Name= " << box.getName();

    return 0;
}