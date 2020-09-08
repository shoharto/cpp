#include <iostream>
using namespace std;

int addition(int, int);
int main()
{
    int result = addition(10, 20);
    cout << result;
    return 0;
}

int addition(int a, int b)
{
    int sum = a + b;
    return sum;
}