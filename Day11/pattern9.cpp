#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}