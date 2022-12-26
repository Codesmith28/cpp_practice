#include <bits/stdc++.h>
using namespace std;

// to check whether a position is safe for the queen or not
bool isSafe(int **arr, int x, int y, int n)
{
    // for coloumn
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }

    // for left diagonal : row-- and col--
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    // for right diagonal: row-- and col++
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

// the recursive function to tell the solution
// we don't need to check for all the columns ,i.e. check the entire row
bool nQueen(int **arr, int x, int n)
{
    // this means we have gone down to the last row, thus all queens are placed (base condition)
    if (x >= n)
    {
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;

            // this recursion checks whether the next queen will be safe from the current queen or not !
            if (nQueen(arr, x + 1, n))
            {
                return true;
            }
            // backtrack for the current column if in case needed
            arr[x][col] = 0;
        }
    }
    // we return false at last after checking for every row and column and not just after every column
    return false;
}

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 1)
                {
                    cout << "Q"
                         << " ";
                }
                else
                {
                    cout << "."
                         << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}