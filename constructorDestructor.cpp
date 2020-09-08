// a program of constructor and destructor

#include <iostream>
using namespace std;

class myClass
{
private:
    /* data */
    int a;

public:
    myClass();
    ~myClass();
    void show();
};

myClass::myClass()
{
    cout << "This is Constructor" << endl;
    a = 10;
}

myClass::~myClass()
{
    cout << "This is Destructor" << endl;
}

void myClass::show()
{
    cout << a << "\n";
}

int main()
{
    myClass ob;
    ob.show();
    return 0;
}
