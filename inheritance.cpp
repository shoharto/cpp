#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
public:
    int id;
    void displayStudent()
    {
        displayPerson();
        cout << "ID: " << id << endl;
    }
};

int main()
{
    Student s1;
    s1.id = 007;
    s1.name = "Shoharto";
    s1.age = 24;
    s1.displayStudent();
    return 0;
}