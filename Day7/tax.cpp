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

    cout << "What is your income ?  : ";
    cin >> income;

    // 50k --> 5%
    if (income <= 250000)
    {
        cout << "income is below 2.5L" << endl;
        tax = 0;
    }

    // 3L
    if (income > 250000 && income <= 500000)
    {
        // 5 % tax
        cout << "between 2.5 to 5.0 L" << endl;
        tax += 0.05 * (income - 250000); // 5/100
    }

    if (income > 500000 && income <= 1000000)
    {
        // 20 % tax
        cout << "between 5.0 to 10.0 L" << endl;
        tax += 0.20 * (income - 500000); // 5/100
    }

    if (income > 1000000)
    {
        // 30 % tax
        cout << "above 10.0 L" << endl;
        tax += 0.30 * (income - 1000000); // 5/100
    }

    cout << "The amout of tax you need to pay is : " << tax << endl;
    return 0;
}