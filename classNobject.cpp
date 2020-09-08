#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double gpa;

    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    Student()
    {
        cout << "Default Constructor" << endl;
    }
    void display()
    {
        cout << id << " " << gpa << endl;
    }
};

int main()
{
    Student defaultConst;
    Student Bayes(007, 5.07);

    Student Ahmed(005, 40.8);

    //output
    Bayes.display();
    Ahmed.display();
    return 0;
}
