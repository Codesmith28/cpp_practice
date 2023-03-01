#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;
/*Problem: You are given n files with their computation
times in an array.
Operation: Choose/take any two files, add their computation
times and append it to the list of computation
times. {Cost = Sum of computation time}
Do this until we are left with only one file in the
array.*/

int main()
{
    // to find the minimum cost

    // approach:
    /*take the smallest 2 elements in the array and replace them with their sum
    sort the array again

    repeat this operation till all elements are exhausted*/

    int n;
    cin >> n;

    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    int ans = 0;

    // making a priority queue as we want to perform the given operation in all operations

    priority_queue<int, vi, greater<int> > minheap;

    rep(i, 0, n)
    {
        minheap.push(a[i]);
    }

    while (minheap.size() > 1)
    {
        int ele1 = minheap.top();
        minheap.pop();
        int ele2 = minheap.top();
        minheap.pop();

        ans += ele1 + ele2;
        minheap.push(ele1 + ele2);
    }

    cout << "Minimum cost : " << ans << endl;

    return 0;
}