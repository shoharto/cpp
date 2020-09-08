#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    while (1)
    {
        int guessNumber,
            randNumber;

        cout << "Enter your gurss number 1 to 5: " << endl;
        cin >> guessNumber;

        randNumber = 1 + rand() % 5;

        if (guessNumber == randNumber)
        {
            cout << "You Won" << endl;
        }
        else
        {
            cout << "You Lost" << endl;
            cout << "Random Number was: " << randNumber << endl;
        }
    }

    return 0;
}