#include <iostream>
using namespace std;

class Person
{
public:
    virtual void display()
    {
        cout << "I'm a person." << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "I'm a Student." << endl;
    }
};

class Teacher : public Person
{
public:
    void display()
    {
        cout << "I'm a Teacher." << endl;
    }
};

int main()
{

    Teacher t;
    Student s1;
    Person *P1;

    P1 = &s1;
    P1->display();

    P1 = &t;
    P1->display();
    return 0;
}