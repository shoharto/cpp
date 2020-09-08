#include <iostream>
using namespace std;

struct address
{
    int house_no;
    string street_name;
};

struct student
{
    string name;
    int rollno;
    address addr;
};

int main()
{
    student sho;
    sho.name = "bayes";
    sho.rollno = 1234;

    sho.addr.house_no = 5555;
    sho.addr.street_name = "park street";

    cout << sho.name << endl;
    cout << sho.rollno << endl;
    cout << sho.addr.house_no << endl;
    cout << sho.addr.street_name << endl;

    return 0;
}