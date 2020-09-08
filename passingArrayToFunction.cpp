#include <iostream>
using namespace std;

void displayArray(int num[])
{
    for (int i = 0; i <= 4; i++)
    {
        cout << num[i] << endl;
    }
}

int main()
{
    int number[5] = {
        10, 20, 30, 40, 50};
    displayArray(number);
    return 0;
}