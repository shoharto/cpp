#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float  num1,
         num2,
            c;
    cout <<"Enter two numbers: "<<endl;
    cin>> num1 >> num2;
    c= num1+ num2;
    cout<<fixed;
    cout<<setprecision(2);
    cout << "Sum is :" << c <<endl;
    return 0;

}