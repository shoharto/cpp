#include <iostream>
using namespace std;
//1+2+3.........+n
int main()
{
    int sum = 0,
        n;
    cout << "Enter The last Value:" << endl;
    cin >> n;
    for (int i = 1; i < n; i=i+1)
    {
        sum = sum  + i;
    
    }
    cout<<"Sum of Series is:"<<sum<<endl;

    return 0;
}