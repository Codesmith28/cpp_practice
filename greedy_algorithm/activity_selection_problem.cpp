#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;

int main()
{
    /*You are given n activities with their start and finish times.Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.*/

    /*make a diagram like schedule and count the non-overlapping lines,
    if lines overlap; then count one of them*/

    /* pick ith activity and then next activity will be the one which ends first */

    // sort the acitivity wrt their endtimes

    int n;
    cin>>n;

    vector<vi> v;
    rep(i,0,n)
    {
        int start,end;
        cin>>start>>end;

        v.push_back({start,end});
    }

    // making a custom comparator!
    sort(v.begin(), v.end(), [&])

    
    

    return 0;
}