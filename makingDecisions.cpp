#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int randNum1, randNum2;
    int userTotal, computerTotal;

    int seed = time(0);

    srand(seed);
    randNum1 = 1 + rand() % 100;
    randNum2 = 1 + rand() % 100;

    computerTotal = randNum1 + randNum2;

    cout << setw(5) << randNum1 << endl;
    cout << setw(3) << " + " << randNum2 << endl;
    cout << "------\n";

    cin >> userTotal;

    if (userTotal == computerTotal)
    {
        cout << "\nGreat Job!\n";
    }
    else
    {
        cout << "\nSorry, Wrong answer. Correct answer is: " << computerTotal << endl;
    }

    return 0;
}