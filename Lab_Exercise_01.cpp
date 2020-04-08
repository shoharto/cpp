/*
Program 5.19
Name: Bayes Ahmed Shoharto
Matric Number: A18CS4051
QUESTION 8,PAGE-55
*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string firstname = "Abu ", lastname = "Bakar";
    string fullname;
    fullname = firstname + lastname; //Concatenate the firstname & last name
   // cout << fullname << endl;

    fullname.append(","); //Append a single char(,)
    fullname.append("Dr "); //Append another string (Dr)
    cout << fullname << endl;

    fullname.replace(12, 10, "Prof Madya"); //Replace a string -(Dr) to (prof Madya)
    cout << fullname << endl;               

    fullname.erase(16, 6);    //Erase a string -(Madya)
    cout << fullname << endl; 

    fullname.insert(12, "Associate "); //Insert a string -(Associate)
    cout << fullname << endl;
    return 0;
}