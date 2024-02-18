#include <iostream>
#include <string>
using namespace std;

/*


*/
int main()
{
    //                    i
    //             012345 6
    string name = "pratik\0mohite";

    int len = 0;
    int i = 0;
    while (name[i] != '\0') // l != '\0';
    {
        len++;
        i++;
    }

    cout << "lenght of " << name << " is " << len;
    return 0;
}