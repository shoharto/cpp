#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    /**
    string name;
    int age;
    ofstream file;
    file.open("student.txt", ios::out | ios::app);
    for (int i = 0; i < 4; i++)

    {

        cout << "Enter your name: " << endl;
        getline(cin, name);
        file << name << "\t";
        cout << "Enter your Age: " << endl;
        cin >> age;
        file << age << endl;
        cin.ignore();
    }
    **/

    string line;
    ifstream file("student.txt");
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}