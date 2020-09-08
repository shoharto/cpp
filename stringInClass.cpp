#include <iostream>
using namespace std;

int main()
{
    int len;
    string str1 = "Bayes";
    string str2 = " Ahmed";
    string str3;

    str3 = str1;

    cout << str3 << endl;

    str3 = str1 + str2;
    cout << str3 << endl;

    len = str1.size();
    cout << len << endl;

    return 0;
}