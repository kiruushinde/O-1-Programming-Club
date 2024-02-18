#include <iostream>
using namespace std;

/*
#️⃣ Two pointer approahc

index :  0   1   2   3    4  5
    Q. {110, 92, 89, 8, 120, 9} size = 6
                  j  i

      o/p: 110 9 92 120 89..
*/
int main()
{
    //                    ij
    //             0  1   2    3   4
    int arr[] = {110, 92, 89, 120, 9};
    int size = sizeof(arr) / sizeof(int);

    int i = 0;
    int j = size - 1;

    while (i <= j) // 2 < 2
    {
        if (i == j)
        {
            cout << arr[i];
            i++;
        }

        else
        {
            cout << arr[i] << " " << arr[j] << " ";
            i++;
            j--;
        }
    }

    return 0;
}