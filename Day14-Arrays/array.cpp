#include <iostream>
using namespace std;

/*

#️⃣ Data types..
1. int
2. float
3. char
4. bool


#️⃣ Data structures..
1. Array
2. String
3. LinkedList -->
4. Stack --> LIFO
5. Queue --> FIFO
6. Tree
7. Graphs


#️⃣ DRY -> Do not Repeat Yourself..

80 students.. array delcare..

int markofkrian;
int markofanurag;
pratik..








#️⃣ what is an array ?
-> 1. collection of similar data types.
   2. sequential manner
   3. contiguous memroy locations
   4. it is a data structure..
   5.

 10^7
*/
// global scope

void print(int arr[])
{
    arr[0] = 100;
    cout << "Your array is : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Value at index " << i << " is : " << arr[i] << endl;
    }
}
int main()
{
    // creating an array

    // data_tyep name[];

    int studentMarks[80]; // 10^6
    float studentPer[80];
    int arr[10];
    // totalElements = 10
    // datatype = int(4 bytes)
    // totalsize = no. of elements * size of datatype
    // totalsize = 10 * 4 = 40 bytes

    // index    :  0,  1 , 2 ,  3, 4

    // cout << "Value at index 0 is : " << arr2[0] << endl;
    // cout << "Value at index 1 is : " << arr2[1] << endl;
    // cout << "Value at index 2 is : " << arr2[2] << endl;
    // cout << "Value at index 3 is : " << arr2[3] << endl;
    // cout << "Value at index 4 is : " << arr2[4] << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Value at index " << i << " is : " << arr2[i] << endl;
    // }

    int arr2[5] = {10, 20, 30, 40, 50}; // initialization

    // arr2[0] = 100;

    print(arr2); // function invoked..
    return 0;
}