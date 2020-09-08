#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    void display()
    {
        cout << roll  << endl;
        cout << name  << endl;
    }
};

int main()
{
    Student sho;

    sho.name  ="bayes";
    sho.roll = 1223;

    sho.display();

    return 0;
}