#include <iostream>
using namespace std;

// int main()
// {
//     cout<<"rows:\n";
//     int r;
//     cin>>r;

//     cout<<"coloumns:\n";
//     int c;
//     cin>>c;

//     int i;
//     int j;

//     cout<<"elements:\n";
//     int arr[r][c];
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     cout<<"key:\n";
//     int key;
//     cin>>key;

//     cout<<"2d array :"<<endl;
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     bool flag=false;

//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             if(arr[i][j] == key)
//             {
//                 cout<<"key is in row: "<<i<<" and coloumn: "<<j<<endl;
//                 flag = true;
//             }
//         }
//     }

//     if(flag == false)
//     {
//         cout<<"element dne\n";
//     }

//     return 0;
// }

// spiral order matirx traversal

int main()
{
    cout << "rows:\n";
    int r;
    cin >> r;

    cout << "coloumns:\n";
    int c;
    cin >> c;

    int arr[r][c];

    int i, j;
    cout << "elements:\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "normal 2d array:\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // logic : declare 4 variables for row start and end and coloumn start and end

    int rs = 0, re = r - 1, cs = 0, ce = c - 1;
    cout << "array in spiral order:\n";

    while (rs <= re && cs <= ce)
    {
        // for rs:
        for (i = cs; i <= ce; i++)
        {
            cout << arr[rs][i] << " ";
        }
        rs++;

        // for ce:
        for (i = rs; i <= re; i++)
        {
            cout << arr[i][ce] << " ";
        }
        ce--;

        // for re;

        for (i = ce; i >= cs; i--)
        {
            cout << arr[re][i] << " ";
        }
        re--;

        // for cs
        for (i = re; i >= rs; i--)
        {
            cout << arr[i][cs] << " ";
        }
        cs++;
    }

    return 0;
}