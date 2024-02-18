#include <iostream>
using namespace std;

/*
    #️⃣ Approach..

    {1, 2, 3, 4, 5};
    i            j

    1. swap
      5 {2 3 4} 1
         i   j

    2. 5 4 3 2 1
          ij

*/

void print(int arr[], int size)
{
    cout << "Your array is : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    int i = 0;
    int j = size - 1;

    print(arr, size);

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    print(arr, size);

    return 0;
}