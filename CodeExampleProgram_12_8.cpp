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
    const int SIZE = 81;
    char input[SIZE];
    fstream nameFile;

    nameFile.open("murphy.txt", ios::in);
    if (!nameFile)
    {
        cout << "ERROR: Cannot open file." << endl;
        return 0;
    }

    nameFile.getline(input, SIZE);
    while (!nameFile.eof())
    {
        cout << input << endl;
        nameFile.getline(input, SIZE);
    }

    nameFile.close();
    return 0;
}
