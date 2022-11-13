#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << *arr << endl;

    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        // cout<<*arr<<endl; this will give only 0 index value
        // *arr++; no as *arr is a const pointer

        cout << *(arr + i) << endl;
        /* is a pointer for array and it increases decreases by boxes of arrays
        thus +- 1 will lead to next/prev element of array irrespective of what array stores */
    }
}