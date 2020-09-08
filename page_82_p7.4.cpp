/*
Bayes Ahmed Shoharto
A18CS4051
Porgram 7.4
*/

#include <iostream>
using namespace std;

class Name
{
private:
    string firstname;
    string lastname;

public:
    Name(string first, string last)
    {
        firstname = first;
        lastname = last;
    }
    string getFullname()
    {
        return firstname + " " + lastname;
    }
};

class Student
{
private:
    Name name;
    string address;

public:
    Student(string, string, string);
    void print();
};

Student::Student(string first, string last, string address) : name(first, last)
{
    this->address = address;
}

void Student::print()
{
    cout << name.getFullname() << "\n"
         << address << endl;
}

int main()
{
    string first, last;
    cin >> first;
    cin >> last;
    Student stu1(first, last, "Jalan Pulai 10/1, Skudai, Johor, 81310");
    stu1.print();
    return 0;
}