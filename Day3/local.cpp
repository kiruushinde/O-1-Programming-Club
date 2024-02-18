#include <iostream>
using namespace std;

int globalVar = 3; // global scope

float pi = 3.14; // ?

int main()
{
    // int globalVar = 5; // priority high
    cout << globalVar;
    int b = 8; // local scope
    return 0;
}