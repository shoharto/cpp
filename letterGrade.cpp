#include<iostream>
using namespace std;

int main()
{
    int mark;
    cout<<"Enter the Mark:"<<endl;
    cin>>mark;

    if (mark>100)
    {
        cout <<"Invalid Mark";
    }
    else if (mark<0)
    {
        cout <<"Invalid Mark";
    }
    else if (mark >= 80)
    {
        cout<<"A+";
    }
    else if (mark >= 70)
    {
        cout<<"B+";
    }
    
    else if (mark >= 60)
    {
        cout<<"C+";
    }
    else
    {
        cout<<"Fail";
    }
    



    return 0;
}