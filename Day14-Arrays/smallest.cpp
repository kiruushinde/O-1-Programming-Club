#include <iostream>
using namespace std;

int findLargest(int arr[], int size)
{
    int maxi = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
    }

    return maxi;
}

/*

    1. largest = int_min;

    2. smallest = int_max; // 9
    #️⃣ Approcah

    smallest..
    {110, 92, 89, 120, 9}


*/
int main()
{

    int arr[] = {110, 92, 89, 120, 9};
    int size = sizeof(arr) / sizeof(int);

    int smallest = INT8_MAX; // 10k

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << smallest;
    return 0;
}