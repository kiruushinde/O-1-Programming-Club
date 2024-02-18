#include <iostream>
using namespace std;

int main()
{
    float income;
    cin >> income;

    float tax = 0;
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }

    return 0;
}