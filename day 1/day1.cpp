#include<iostream>
using namespace std;

//finding an element in the array-linear search

// int main()
// {
//     cout<<"array size:\n";
//     int n;
//     cin>>n;
//     int arr[n];

//     cout<<"element of the array:\n";
//     int i;
//     for(i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"required key:\n";
//     int key;
//     cin>>key;
//     int ans=-1;

//     for(i=0; i<n; i++)
//     {
//         if(arr[i] == key)
//         {
//             ans=i;

//         }
//     }

//     cout<<"index of required element:"<<ans<<endl;
//     return 0;
// }


// BINARY SEARCH

int bs(int arr[], int n, int key)
{
    int s=0;
    int e=0;

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]<key)
        {
            e=mid-1;
        }

        else
        {
            s=mid+1;
        }       
    }
    return -1;
}

int main()
{
    cout<<"array size:\n";
    int n;
    cin>>n;
    int arr[n];
    
    cout<<"elements of the array:\n";
    int i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"key:\n";
    int key;
    cin>>key;

    cout<<"index of required element"<<bs(arr ,n ,key)<<endl;
    return 0;
}
