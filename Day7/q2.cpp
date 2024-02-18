#include <iostream>
using namespace std;

/*
 write a program to find out whether a student is pass or fail. If it required total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user. 

 1. at least 33 in each subject 
 2. total 40
*/
int main()
{
    int math, phy, chem;

    int total = 0;

    cout << "Enter maths, phy and chemistry marks : " << endl;
    cin >> math >> phy >> chem;

    total = (math + phy + chem) / 3;
    // total marks obtained/3

    cout << total << " is total marks " << endl;

    if (math < 33 || phy < 33 || chem < 33)
    {
        cout << "Fail";
    }
    else if (total < 40)
        cout << "Fail";
    else
        cout << "Pass";

    // if (total > 40 && math > 33 && phy > 33 && chem > 33)
    // {
    //     cout << "pass" << endl;
    // }
    // else
    // {
    //     cout << " Fail " << endl;
    // }
    return 0;
}