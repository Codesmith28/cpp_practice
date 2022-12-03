#include <iostream>
using namespace std;

int fo(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i; 
    }
    return fo(arr,n,i+1,key);
}

int lo(int arr[],int n,int i,int key)
{
    int rest = lo(arr,n,i+1,key);
    if(rest!=-1)
    {
        return rest;
    }

    if(arr[i]==key)
    {
        return i;
    }
    return -1;

}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout<<fo(A,n,0,2)<<endl;
    cout<<lo(A,n,0,2)<<endl;
    return 0;
}