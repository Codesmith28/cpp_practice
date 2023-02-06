#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;

int main()
{
    // obtaining the same key values in map is called collision

    // if collision occurs:
    /*      create a chain of values at same key using linked list
     */

    // maps vs unordered_map
    /*
    insertion : O(log(n)) - O(1)
    accessing : O(log(n)) - O(1)
    accessing : O(log(n)) - O(1)
    deletion : O(log(n)) - O(n)
    implementation : red-black tress(internal) - hash tables( array of buckets)
    */

    // key = 8 with value = 2
    /*     map<int, int>m;
        m[8] = 2;
        cout<<m[8]<<endl;
    */

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // using map to store the 
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        // as it is a pointer
        cout << it->ff << " " << it->ss << endl;
    }


    return 0;
}