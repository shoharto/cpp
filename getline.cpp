#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    //cin >> name;
    getline(cin, name);
    cout << name << endl;
    return 0;
}