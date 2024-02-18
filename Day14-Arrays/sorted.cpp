#include <iostream>
using namespace std;

/*
    1 2 5 4 3
            p n
*/
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    int n;

    int flag = 0;

    // 1 2 5 4 3
    //       p n
    for (int p = 0; p < size - 1; p++)
    {
        int n = p + 1; // p = 4, n = 5
        //    4    <  3
        if (arr[p] < arr[n])
        {
            flag = 1;
        }
        else
            flag = 0;
    }

    if (flag)
    {
        cout << "Sorted it is..";
    }
    else
        cout << "not sorted..";
    return 0;
}