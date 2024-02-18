#include <iostream>
#include <math.h> //
using namespace std;

void add(int a, int b)
{
    // what
    cout << "Addition of two number's is : " << a + b;
}
int main()
{
    int n1, n2;
    cout << "Enter the numbers : " << endl;
    cin >> n1 >> n2;

    cout << "1.add\n2.subtract\n3.multiply\n4.divide\n";

    cout << endl;

    int choice;
    cout << "Enter your choice : ";
    cin >> choice;

    if (choice == 1)
    {
        add(n1, n2);
    }
    else if (choice == 2)
    {
        // subtract(n1, n2);
    }
    else if (choice == 2)
    {
        // multiply(n1, n2);
    }
    else
    {
        // divide(n1, n2);
    }

    return 0;
}