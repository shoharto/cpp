#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int array_size;
    cin >> array_size;
    int arr[array_size];

    for (int i = 0; i < array_size; i++)
    {
        cin >> arr[i];
    }

    for (int i = array_size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
