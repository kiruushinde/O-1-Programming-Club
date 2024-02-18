#include <iostream>
using namespace std;

/*

    N size;

    1 to N withing numbers

    N = 5;

    N-1; 4 elements

    N = 5;
    {1, 2, 4, 5} -> 3 is missing...


    #️⃣ Approach 1

    - find sum of N natural numbers.
      n*(n+1)/2;

    - find sum of array elements

    - (actual sum - array sum)


*/
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 5};

    int actualSum = (n * (n + 1)) / 2;
    cout << actualSum << endl;

    int arrSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        arrSum += arr[i];
    }

    cout << arrSum << endl;

    int missing = actualSum - arrSum;

    cout << "missing number is : " << missing;
    return 0;
}