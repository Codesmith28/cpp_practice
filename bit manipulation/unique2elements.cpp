#include<iostream>
using namespace std;


int getbit(int n,int pos)
{
    return( (n&(1<<pos))!=0 );
}


void uniq(int arr[],int n)
{
    int xors = 0;
    for(int i=0; i<n; i++)
    {
        xors =  xors ^ arr[i];
    }
    // to find the rightmost setbit in xors
    int sb = 0;
    int pos=0;
    int tempxors = xors;
    while (sb!=1)
    {
        sb = xors&1;
        pos++;
        xors = xors>>1;

    }

    int newxors=0;
    for(int i=0; i<n; i++)
    {
        if( getbit(arr[i],pos-1) )
        {
            newxors = newxors^arr[i];
        }
    }

    cout<<newxors<<endl;
    cout<<(tempxors^newxors)<<endl;
}

int main()
{   
    int n;
    cin>>n;
    int A[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    uniq(A,n);
    return 0;
}