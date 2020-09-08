#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    vector<int> vec;
    vector<int>::iterator it;

    for (int i = 0; i <= 5; i++)
    {
        vec.push_back(i);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\t";
    }
    puts(" ");

    it = vec.begin();
    it++;
    cout<< *it <<endl;
    return 0;
}