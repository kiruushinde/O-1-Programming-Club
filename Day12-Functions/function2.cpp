#include <iostream>
using namespace std;

// arguments  3,  5
int fun1(int a, int b)
{
    return a * b; // 15 + 0.3 = 15.3
}

float fun2()
{
}

char fun3()
{
    cout << "I am fun3 without arguements" << endl;
}

char fun3(int a)
{
    cout << "I am fun3 with argumetns" << endl;
}

int main()
{
    fun3();
    fun3(5);
    return 0;
}