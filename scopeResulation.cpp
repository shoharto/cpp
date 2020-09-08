#include <iostream>
using namespace std;
int x = 10;

int main()
{
    int x =50;
    cout << "Inside the main function: " << ::x << endl;
    
    return 0;
}