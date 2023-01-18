#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void wavesort(int arr[], int n)
{
    for (int i = 1; i < n - 1; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr, i, i - 1);
        }
        if ((arr[i] > arr[i + 1]) && (i <= n - 2))
        {
            swap(arr, i, i + 1);
        }
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

    wavesort(a, n);

    for (auto element : a)
    {
        cout << element << " ";
    }
    cout << "\n";

    return 0;
}