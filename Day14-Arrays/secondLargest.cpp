#include <iostream>
using namespace std;

/*
    second largest element..

    largest = arr[0];
    {110, 92, 89, 120, 9};

    largest = 120;

    sL = -1;

    #️⃣ approach
    sL < largest

    1. curr = 1;
        - curr < largest (110 < 120) true
        - curr > sL (110 > -1) true

        sL = curr;// 110

    2. curr = 92
        - curr < largest (92 < 120) --> true
        - curr > sL (92 > 110) --> false

    3. curr = 89
        - curr < largest (89 < 120) --> true
        - curr > sL (89 > 110) --> false



*/

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
int main()
{

    int arr[] = {110, 92, 89, 120, 9};
    int size = sizeof(arr) / sizeof(int);

    int largest = findLargest(arr, size);
    // cout << largest;

    int sL = -1;

    for (int i = 0; i < size; i++)
    {
        int curr = arr[i];

        // curr < largest && curr > sL
        if (curr < largest && curr > sL)
            sL = curr;
    }

    cout << sL;
    return 0;
}