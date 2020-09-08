#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[50];
    cout << "Enter Your Name: " << endl;
    cin.getline(name,50);
    cout << "Welcome " << name << endl;
    return 0;
}