#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1};
    int size = sizeof(arr) / sizeof(int);

    int counter = 0;
    int largestSeq = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            counter++;
        }
        else
        {
            if (counter > largestSeq)
            {
                largestSeq = counter;
            }
            counter = 0;
        }
    }

    cout << largestSeq;
    return 0;
}