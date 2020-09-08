#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    fstream inout;

    inout.open("city.txt", ios::out);

    if (inout.fail())
    {
        cout << "File doesnot exist" << endl;

        return 0;
    }

    inout << "Dhaka "
          << "Mymensingh "
          << " Khulna";

    inout.close();

    inout.open("city.txt", ios::in);

    if (inout.fail())
    {
        cout << "File doesnot exist" << endl;

        return 0;
    }

    char city[50];
    inout.getline(city, 50); 
    while (!inout.eof())
    {
        cout << city << endl;
        inout.getline(city, 50);
        inout.ignore();
    }
    inout.close();
    cout << "Done" << endl;
    system("pause");
    return 0;
}