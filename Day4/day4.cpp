/*
    - more on cout.
    - taking input
    - 
*/

/*
    endl --> for new line 

    ctrl + / --> comment
*/

#include <iostream>
using namespace std;

int main()
{
    string myName = "Kiran";
    int marks = 80;
    // cout << myName << endl;
    // cout << marks << endl;

    // cout << "My name is " << myName << endl
    //  << " and my makrs are " << marks;

    // how to take input

    /*
        string userName;
        string userMail;

        cout << "Enter your name : ";
        cin >> userName;
        cout << "Enter your mail id : ";
        cin >> userMail;

        cout << endl;
        cout << "user name is " << userName << " and his mail id is : " << userMail << endl;
    */

    int maths;
    float chem;
    string phy;

    cout << "Enter your marks " << endl;

    cin >> maths >> chem;
    cin >> phy;

    cout << maths << " " << phy << " " << chem;
    return 0;
}