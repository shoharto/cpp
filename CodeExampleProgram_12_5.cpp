/*
Name: Bayes Ahmed Shoharto
Matric no: A18CS4051
Date: 14-04-2020
Topic: 06: Advanced File Operations
This program demonstrates how file system objects may be passed by reference to functions.
*/

#include <iostream>
#include <fstream>
using namespace std;

const int MAX_LINE_SIZE = 81;
bool openFileIn(fstream &, char *);
void showContents(fstream &);

int main()
{
    fstream dataFile;

    if (!openFileIn(dataFile, "demofile.txt"))
    {
        cout << "File open error!" << endl;
        return 0;
    }

    cout << "File opend succesfully." << endl;
    cout << "Now reading data from the file.\n\n";
    showContents(dataFile);
    dataFile.close();
    cout << "\nDone.\n";
    return 0;
}
bool openFileIn(fstream &file, char *name)
{
    file.open(name, ios::in);
    if (file.fail())
    {
        return false;
    }
    else
    {
        return true;
    }
}

void showContents(fstream &file)
{
    char line[MAX_LINE_SIZE];
    while (file >> line)
    {
        cout << line << endl;
    }
}
