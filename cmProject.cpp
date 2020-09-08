/*===*===*===*===*===*===*===*===*===*===*===*===*===*
COMPUTATIONAL MATHEMATICS                            =
Programming Project                                  *
Group Members:                                       =
Bayes Ahmed Shoharto              (A18CS4051)        *
Irtisum Musharrat Rahman          (A19EC4010)        =
Md Shakil Chowdhury               (A18CS4047)        =
===*===*===*===*===*===*===*===*===*===*===*===*====*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input, n, result;
A:
    cout << "========== Menu ==========" << endl;
    cout << "1. Determinant calculation " << endl;
    cout << "2. LU factorization " << endl;
    cout << "3. Interpolation " << endl;
    cout << "4. Exit  " << endl
         << endl;

    cout << "Input option : ";
    cin >> input;

    if (input == 1)
    {
    B:
        cout << "1. Determinant of 2x2 matrix." << endl;
        cout << "2. Determinant of 3x3 matrix." << endl
             << endl;
        cout << "Choose the matrix your want to find determinant : ";
        cin >> n;
        if (n == 1)
        {
            int arr1[2][2];
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    cout << "Enter the value of " << i + 1 << j + 1 << " : ";
                    cin >> arr1[i][j];
                }
            }
            result = (arr1[0][0] * arr1[1][1]) - (arr1[1][0] * arr1[0][1]);
            cout << "\nThe determinant of 2x2 matrix is " << result << endl
                 << endl;
            cout << "Press any key to continue......" << endl
                 << endl;
            cin.ignore();
            cin.get();
            goto A;
        }
        else if (n == 2)
        {
            int arr2[3][3];
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << "Enter the value of " << i + 1 << j + 1 << " : ";
                    cin >> arr2[i][j];
                }
            }
            result = (arr2[0][0] * (arr2[1][1] * arr2[2][2] - arr2[2][1] * arr2[1][2])) - (arr2[0][1] * (arr2[1][0] * arr2[2][2] - arr2[2][0] * arr2[1][2])) +
                     (arr2[0][2] * (arr2[1][0] * arr2[2][1] - arr2[2][0] * arr2[1][1]));
            cout << "\nThe determinant of 3x3 matrix is " << result << endl
                 << endl;
            cout << "Press any key to continue......" << endl
                 << endl;
            cin.ignore();
            cin.get();
            goto A;
        }
        else
        {
            cout << endl
                 << "Wrong input. \nPlease insert the right input." << endl
                 << endl;
            goto B;
        }
    }
    else if (input == 2)
    {
    C:
        cout << "Enter the number of variable you want to find the value.(Not more than 3):";
        cin >> n;
        if (n == 2)
        {
            float l[2][2], u[2][2], a[2][2], v[2], x[2], y[2];
            l[0][0] = 1;
            l[0][1] = 0;
            l[1][1] = 1;
            u[1][0] = 0;
            for (int i = 0; i < 2; i++)
            {
                cout << "For equation " << i + 1 << ": " << endl;
                cout << "Constant of x1 variable = ";
                cin >> a[i][0];
                cout << "Constant of x2 variable = ";
                cin >> a[i][1];
                cout << "Constant equal value of the equation" << i + 1 << " = ";
                cin >> v[i];
                cout << endl;
            }
            u[0][0] = a[0][0];
            if (u[0][0] != 0)
                l[1][0] = a[1][0] / u[0][0];
            u[0][1] = a[0][1];
            u[1][1] = a[1][1] - (l[1][0] * u[0][1]);

            y[0] = v[0];
            y[1] = v[1] - (l[1][0] * y[0]);

            x[1] = y[1] / u[1][1];
            x[0] = (y[0] - (u[0][1] * x[1])) / u[0][0];

            cout << "Answer:" << endl;
            cout << "x1=" << x[0] << ", x2=" << x[1] << endl
                 << endl;
            cout << "Press any key to continue......" << endl
                 << endl;
            cin.ignore();
            cin.get();
            goto A;
        }
        else if (n == 3)
        {
            float l[3][3], u[3][3], a[3][3], v[3], x[3], y[3];
            l[0][0] = 1;
            l[0][1] = 0;
            l[0][2] = 0;
            l[1][1] = 1;
            l[1][2] = 0;
            l[2][3] = 0;
            u[1][0] = 0;
            u[2][0] = 0;
            u[2][1] = 0;
            for (int i = 0; i < 3; i++)
            {
                cout << "For equation " << i + 1 << ": " << endl;
                cout << "Constant of x1 variable = ";
                cin >> a[i][0];
                cout << "Constant of x2 variable = ";
                cin >> a[i][1];
                cout << "Constant of x3 variable = ";
                cin >> a[i][2];
                cout << "Constant equal value of the equation" << i + 1 << " = ";
                cin >> v[i];
                cout << endl;
            }
            u[0][0] = a[0][0];
            u[0][1] = a[0][1];
            u[0][2] = a[0][2];
            l[1][0] = a[1][0] / u[0][0];
            l[2][0] = a[2][0] / u[0][0];
            u[1][1] = a[1][1] - (l[1][0] * u[0][1]);
            u[1][2] = a[1][2] - (l[1][0] * u[0][2]);
            l[2][1] = (a[2][1] - (l[2][0] * u[0][1])) / u[1][1];
            u[2][2] = a[2][2] - (l[2][0] * u[0][2]) - (l[2][1] * u[1][2]);

            y[0] = v[0];
            y[1] = (v[1] - (l[1][0] * y[0])) / l[1][1];
            y[2] = v[2] - (l[2][0] * y[0]) - (l[2][1] * y[1]);

            x[2] = y[2] / u[2][2];
            x[1] = (y[1] - (u[1][2] * x[2])) / u[1][1];
            x[0] = (y[0] - (u[0][1] * x[1]) - (u[0][2] * x[2])) / u[0][0];

            cout << "Answer:" << endl;
            cout << "x1=" << x[0] << ", x2=" << x[1] << ", x3=" << x[2] << endl
                 << endl;
            cout << "Press any key to continue......" << endl
                 << endl;
            cin.ignore();
            cin.get();
            goto A;
        }
        else
        {
            cout << endl
                 << "Wrong input. \nPlease insert the right input." << endl
                 << endl;
            goto C;
        }
    }
    else if (input == 3)
    {

        int limit;
        float *x, *y, s[5], a[3], v[3], arr[3][3], m, xi;
    D:
        cout << "Enter how many data point you want to input (Not more that 7):";
        cin >> limit;
        if (limit > 7 || limit < 0)
        {
            cout << "Wrong data point input." << endl;
            goto D;
        }
        x = new float[limit];
        y = new float[limit];
        s[0] = limit;
        s[1] = 0;
        s[2] = 0;
        s[3] = 0;
        s[4] = 0;
        cout << "Enter " << limit << " data points for X :" << endl;
        for (int i = 0; i < limit; i++)
        {
            cout << i + 1 << ". ";
            cin >> x[i];
            s[1] = s[1] + x[i];
            s[2] = s[2] + pow(x[i], 2);
            s[3] = s[3] + pow(x[i], 3);
            s[4] = s[4] + pow(x[i], 4);
        }
        v[0] = 0;
        v[1] = 0;
        cout << "Enter " << limit << " data points for Y :" << endl;
        for (int i = 0; i < limit; i++)
        {
            cout << i + 1 << ". ";
            cin >> y[i];
            v[0] = v[0] + y[i];
            v[1] = v[1] + x[i] * y[i];
            v[2] = v[2] + y[i] * pow(x[i], 2);
        }
        cout << "Enter the value of Xi = ";
        cin >> xi;

        arr[0][0] = s[0];
        arr[0][1] = arr[1][0] = s[1];
        arr[2][0] = arr[1][1] = arr[0][2] = s[2];
        arr[2][1] = arr[1][2] = s[3];
        arr[2][2] = s[4];

        m = arr[1][0] / arr[0][0];
        arr[1][0] = arr[1][0] - m * arr[0][0];
        arr[1][1] = arr[1][1] - m * arr[0][1];
        arr[1][2] = arr[1][2] - m * arr[0][2];
        v[1] = v[1] - m * v[0];

        m = arr[2][0] / arr[0][0];
        arr[2][0] = arr[2][0] - m * arr[0][0];
        arr[2][1] = arr[2][1] - m * arr[0][1];
        arr[2][2] = arr[2][2] - m * arr[0][2];
        v[2] = v[2] - m * v[0];

        if (arr[1][1] != 0)
        {
            m = arr[2][1] / arr[1][1];
            arr[2][1] = arr[2][1] - m * arr[1][1];
            arr[2][2] = arr[2][2] - m * arr[1][2];
            v[2] = v[2] - m * v[1];
        }

        a[2] = v[2] / arr[2][2];
        a[1] = (v[1] - (arr[1][2] * a[2])) / arr[1][1];
        a[0] = (v[0] - (arr[0][1] * a[1]) - (arr[0][2] * a[2])) / arr[0][0];

        cout << "Output :" << endl;
        cout << "P(X)= (" << a[0] << ")+(" << a[1] << ")X+(" << a[2] << ")X2" << endl
             << endl;
        cout << "P(" << xi << ")= " << a[0] + a[1] * xi + a[2] * pow(xi, 2) << endl
             << endl;

        cout << "Press any key to continue......" << endl
             << endl;
        cin.ignore();
        cin.get();
        goto A;
    }
    else if (input == 4)
    {
        exit(0);
    }
    else
    {
        cout << endl
             << "Wrong input. \nPlease insert the right input." << endl
             << endl;
        goto A;
    }

    return 0;
}