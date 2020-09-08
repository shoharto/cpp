/*
Name: Bayes Ahmed Shoharto
Matric no: A18CS4051
Date: 14-04-2020
Lab Exercise: 06: Advanced File Operations
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream inout;
    inout.open("city.txt", ios::in);
    if (inout.fail())
    {
        cout << "File does not exit" << endl;
        return 0;
    }

    char city[50];
    while (!inout.eof())
    {
        inout >> city;
        cout << city << endl;
    }

    void addData(fstream)
    {
        if (inout.is_open())
        {
            string b;
            cin >> b;
            inout << b;
        }
    }
                                                                                                                                                                                                                                     
    inout.close();
    cout << "Done" << endl;
    return 0;
}
