#include<iostream>
using namespace std;
int main()
{
    int side;
    cin>>side;
    
    int M[side][side];

    cout<<"elements of square matrix:\n";
    for(int i=0; i<side; i++)
    {
        for(int j=0; j<side; j++)
        {
            cin>>M[i][j];
        }
    }

    // solving det part

    

    return 0;
}