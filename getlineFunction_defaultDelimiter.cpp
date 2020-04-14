/*
Name: Bayes Ahmed Shoharto
Matric no: A18CS4051
Date: 14-04-2020
Topic: 06: Advanced File Operations
This program uses the file strem obsject's getline member function to read a line data from the file.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string input;
    fstream nameFile;

    nameFile.open("murphy.txt", ios::in);
    if (!nameFile)
    {
        cout << "ERROR: Cannot open file." << endl;
        return 0;
    }

    getline(nameFile, input);
    while (!nameFile.eof())
    {
        cout << input << endl;
        getline(nameFile, input);
    }

    // nameFile.close();
    return 0;
}
