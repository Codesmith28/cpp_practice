#include <iostream>
using namespace std;

// matrix search



int main()
{
    cout << "rows:\n";
    int r;
    cin >> r;

    cout << "coloumns:\n";
    int c;
    cin >> c;

    int m[r][c];

    cout << "elements of matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }

    return 0;
}