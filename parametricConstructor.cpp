#include <iostream>
using namespace std;

class myClass
{
private:
    int a;

public:
    myClass(int x);
    void show();
};

myClass::myClass(int x)
{
    cout << "In the Constructor" << endl;
    a = x;
}

void myClass::show()
{
    cout << a << endl;
}

int main()
{
    myClass ob(5);

    ob.show();
    return 0;
}
