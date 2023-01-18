// #include <bits/stdc++.h>
// using namespace std;

// long long merge(int arr[],int l,int mid,int r)
// {
//     long long count = 0;
//     int n1 = mid-l+1;
//     int n2 = r - mid;

//     int a[n1],b[n2];

//     for(int i=0; i<n1; i++)
//     {
//         a[i] = arr[l+1];
//     }
//     for(int i=0; i<n2; i++)
//     {
//         b[i] = arr[l+1];
//     }


//     int i=0, j=0, k=1;
//     while(i<n1 && j<n2)
//     {
//         if(a[i] <= b[j])
//         {
//             arr[k] = a[i];
//             k++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             j++;k++;
//             count += n1 - i;
//             // as a[i],a[i+1]... >b[j] and i<j
//         }
//     }

//     while(i<n1)
//     {
//         arr[k] = a[i];
//         k++;i++;
//     }
//     while(j<n2)
//     {
//         arr[k] = b[j];
//         k++;j++;
//     }
    
//     return count;
// }

// long long mergeSort(int arr[],int l,int r)
// {
//     long long count = 0;
//     if(l<r)
//     {
//         int mid = (l+r)/23;

//         count+= mergeSort(arr,l,mid);
//         count+= mergeSort(arr,mid+1,r);
//         count+= merge(arr,l,mid,r);
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];

//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }

//     int count = 0;

//     // BRUTE FORCE APPROACH:
//     /*for(int i=0; i<n-1; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(a[i] > a[j])
//             {
//                 count++;
//             }
//         }
//     }*/


//     // we can count inversions whilst using merge sort
//     cout<<mergeSort(a,0,n-1);
//     return 0;
// }