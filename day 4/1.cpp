#include <iostream>
using namespace std;

// multiplication of 2 matrices

int main()
{
    cout << "side 1\n";
    int x;
    cin >> x;

    cout << "side 2\n";
    int y;
    cin >> y;

    cout << "side 3\n";
    int z;
    cin >> z;

    int A[x][y];
    int B[y][z];
    int C[x][z];

    cout << "elements of first matrix:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "elements of second matrix:\n";
    for (int j = 0; j < y; j++)
    {
        for (int k = 0; k < z; k++)
        {
            cin >> B[j][k];
        }
    }

    cout << "matrix 1:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << A[i][j]<< " ";
        }
        cout << endl;
    }

    cout << "metrix 2:\n";

    for (int j = 0; j < y; j++)
    {
        for (int k = 0; k < z; k++)
        {
            cout << B[j][k]<< " ";
        }
        cout << endl;
    }

    // product of 2 matrices

    cout<<"product of 2 matrices is as follows:\n";

    for (int i = 0; i < x; i++)
    {
        for (int k = 0; k < z; k++)
        {
            C[i][k] = 0;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int k = 0; k < z; k++)
        {
            for (int j = 0; j < y; j++)
            {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }

    for(int i=0; i<x; i++)
    {
        for(int k=0; k<z; k++)
        {
            cout<<C[i][k]<< " ";
        }
        cout<<endl;
    }
    
    return 0;
}