#include <iostream>
using namespace std;

class Student
{
public:
    const int admissionFee;
    const int ExamFee;

    Student(int x, int y)
        : admissionFee(x), ExamFee(y)
    {
        cout << admissionFee << endl;
        cout << ExamFee << endl;
    }
};
  
int main()
{
    Student s1(15000, 600);

    return 0;
}