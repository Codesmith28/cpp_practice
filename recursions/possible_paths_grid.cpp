#include <bits/stdc++.h>
using namespace std;

// n is dimension of grid
// i is initial x coord.
// j is initial y coord.

int countMazeWay(int n, int i, int j)
{
    if ((i == n - 1) && (j == n - 1))
    {
        return 1;
    }

    if (i > n || j > n)
    {
        return 0;
    }

    return countMazeWay(n, i + 1, j) + countMazeWay(n, i, j + 1);
}

int main()
{
    int n;
    cin >> n;
    cout << countMazeWay(n, 0, 0);
    return 0;
}
