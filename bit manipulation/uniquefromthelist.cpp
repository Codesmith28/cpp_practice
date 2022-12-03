#include<iostream>
using namespace std;

int uniq(int arr[],int n)
{
    int xorsum=0;
    for(int i=0; i<n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum; 
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

    cout<<uniq(A,n)<<endl;
    return 0;
}