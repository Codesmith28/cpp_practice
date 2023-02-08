#include <bits/stdc++.h>
using namespace std;

int knapSack(int value[], int wt[], int n, int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (wt[n - 1] > W)
    {
        return knapSack(value, wt, n - 1, W);
        // this case shows when value of item exceeds sack capacity then do not inclue it
    }

    int yes = knapSack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1];
    /* this means we have selected the nth item and thus it's wt
    will be wt[n-1] due to 0 based indexing
    and we add its value that will be value[n-1] */
    int no = knapSack(value, wt, n - 1, W);
    /* here we considered the nth item but did not pick it up and so we didn't added it's value not we reduced our sack capacity */

    // thus "yes" shows the value when item is taken and "no" shows the item when item is not taken

    return max(yes, no);
}

int main()
{
    int n, W;
    cin >> n >> W;
    int wt[n], value[n];

    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    cout << knapSack(value, wt, n, W);
    return 0;
}