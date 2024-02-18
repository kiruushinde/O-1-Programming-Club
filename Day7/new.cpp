#include <iostream>
using namespace std;

/*
3. calculate income tax paid by an employee to the government as per the stats mentioned below
 
    income salary       tax 
    2.5L - 5.0L         5%
    5.0L - 10.0L        20%
    above 10.0L         30%

    - no tax below 2.5L, take income as input from user.

*/
int main()
{
    float income;
    float tax = 0;

    cout << "What is your income : ";
    cin >> income;

    if (income <= 250000)
    {
        tax = 0;
    }

    // 300000
    if (tax > 250000 && tax <= 500000)
    {
        // calculate 5 % tax
        tax = tax + 0.05 * (income - 250000);
    }

    if (tax >= 500000 && tax <= 1000000)
    {
        // calculate 20 % tax
    }

    if (tax >= 1000000)
    {
        // calculate 30 % tax
    }

    return 0;
}