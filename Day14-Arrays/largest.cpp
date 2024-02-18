#include <iostream>
using namespace std;

/*
index : 0  1  2  3  4
array : 1, 2, 3, 4, 5
                    i

           5  < 5
    if(arr[i] < arr[i+1])
    {

    }
    else
        cout << "not sorted ";
        brek;



*/
int main()
{
    int arr[] = {11, 22, 33, 40, 5};
    int size = sizeof(arr) / sizeof(int);

    int flag = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "sorted";
    else
        cout << "Not sorted";
    return 0;
}