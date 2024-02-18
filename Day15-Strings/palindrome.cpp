#include <iostream>
using namespace std;

/*

#️⃣ Approach
    two pointer..

    0 1 2 3 4 5 6 7
    y p o t y p a l --> 8
          i j

    swap(i, j)
    i++; j--;

    0 1 2 3 4 5 6 7 8
    u y p o t y p a l
           ij


*/
int findLenght(string str)
{
    int len = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    return len;
}
int main()
{
    string name = "eye";

    string temp = name;

    //             i      j
    int lenght = findLenght(name); // name.lenght();

    // cout << lenght;
    int i = 0;
    int j = lenght - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }

    if (name == temp)
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}