#include <iostream>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "I'm a person" << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "I'm a Student" << endl;
    }
};

class Teacher : public Person
{
public:
    void display()
    {
        cout << "I'm a Teacher" << endl;
    }
};

int main()
{
    Person p1;
    p1.display();
    
    Student s1;
    s1.display();

    Teacher t1;
    t1.display();
    return 0;
}