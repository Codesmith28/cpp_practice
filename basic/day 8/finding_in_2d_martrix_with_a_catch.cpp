#include<iostream>
using namespace std;
/*
    as our matrix is already sorted then we can 
    start from the 2 corners from which 1 adj value is 
    large and the other adj value is small 
    thus our moves will be limited as for greater value
    we shall move in only particular direction and to 
    find small the same throughout the entire matrix
*/
int main()
{
    cout<<"side: ";
    int s;
    cin>>s;
    int r=s,c=s;
    int M[r][c];

    cout<<"Elements of the matirx: \n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>M[i][j];
        }
    }

    cout<<"Key: \n";
    int key;
    cin>>key;
    //as we are going to iterate from top right corner thus:

    int x=0,y=c-1;
    bool flag = false;
    
    while(x<r && y>=0)
    {
        // we set the said parameters as x starts from 0 and 
        // y starts from the end
        // so their respective ending points will be as mentioned

        if(M[x][y] == key)
        {
            flag = true;
        }

        else if( M[x][y] > key)
        {
            y--;
        }

        else
        {
            x++;
        }

    }

    if(flag == true)
    {
        cout<<"Element exist\n";
    }
    else
    {
        cout<<"Element does not exist\n";
    }



    return 0;
}