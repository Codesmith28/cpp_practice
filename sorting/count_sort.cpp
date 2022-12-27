#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
    // for the maximum element in the array
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }

    // count of elements stored in count array:
    int count_array[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count_array[arr[i]]++;
    }

    // count_array modified to position array:
    for (int i = 1; i <= k; i++)
    {
        count_array[i] += count_array[i - 1];
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count_array[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    countSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}