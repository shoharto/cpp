#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter The Number: " << endl;
    cin >> num;

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << " "<< row;
        }
        cout<<endl;
    }

    return 0;
}