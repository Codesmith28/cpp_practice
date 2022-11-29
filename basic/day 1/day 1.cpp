#include<iostream>
using namespace std;

//finding an element in the array

int main()
{
    cout<<"array size:\n";
    int n;
    cin>>n;
    int arr[n];

    cout<<"element of the array:\n";
    int i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"required key:\n";
    int key;
    cin>>key;
    int ans=-1;

    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            ans=i;

        }
    }

    cout<<"index of required element:"<<ans<<endl;
    return 0;
}