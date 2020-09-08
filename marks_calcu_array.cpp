#include <iostream>
using namespace std;

int main()
{
    int array_size,
        sum = 0,
        max,
        min;
    float avg;
    cout << "Enter The Number Of Students:" << endl;
    cin >> array_size;

    int marks[array_size];

    //input
    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter The Marks Of Student:" << i + 1 << endl;
        cin >> marks[i];
        sum = sum + marks[i];
    }
    //Average
    avg = (float)sum / array_size;

    //Maximum
    max = marks[0];
    for (int i = 1; i < array_size; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }
    //Minimum
    min = marks[0];
    for (int i = 1; i < array_size; i++)
    {
        if (min > marks[i])
        {
            min = marks[i];
        }
    }

    //output
    cout << endl;
    cout << "#### OUTPUT ####" << endl;
    cout << "Total Marks :" << sum << endl;
    cout << "Average :" << avg << endl;
    cout << "Maximum :" << max << endl;
    cout << "Minimum :" << min << endl;

    return 0;
}
