#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter The Number: " << endl;
    cin >> num;

    (num % 2 == 0) ? cout << num << " is Even" : cout << num << " is odd";

    return 0;
}