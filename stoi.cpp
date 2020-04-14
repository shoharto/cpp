#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputString = " ";
    int inputInt = 0;

    //cout << "Enter your name: ";
    //cin >> name;

    getline(cin, inputString);
    inputInt = stoi(inputString);
    cout << inputInt << endl;
    return 0;
}