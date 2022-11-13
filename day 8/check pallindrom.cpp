#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int char arr[n+1];
    cin>> arr;
    int i,j;

    bool flag = true;

    for(i=0; i<n; i++)
    {
        if( arr[i] != arr[n-i])
        {
            flag = false;
            break;
        }
    }

    if(flag == true)
    {
        cout<<"Pallindrome\n";
    }

    else
    {
        cout<<"Not a Pallindrome\n";
    }
    return 0;
}