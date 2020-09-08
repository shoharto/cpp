#include <iostream>
using namespace std;

template <class myTemplate1, class myTemplate2>
myTemplate1 add(myTemplate1 a, myTemplate2 b)
{
    return a + b;
}

int main()
{
    cout << add(10.5, 30) << endl;

    return 0;
}