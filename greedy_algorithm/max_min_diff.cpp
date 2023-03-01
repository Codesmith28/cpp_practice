#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ll long long
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;
/*You are given an array, A, of n elements. You have to remove exactly
n/2 elements from array A and add it to another array B(initially
empty).
Find the maximum and minimum values of differences between
these two arrays.
We define the difference between these two arrays as :
summation(abs(a[i]-b[i]))*/

int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    // !to maximise a[i] - b[i]:
    /*
    a[i] should be as large as possible
    b[i] should be as small as possible
    or
    A[i] should be as large as possible
    A[j] should be as small as possible*/

    //! to minimise a[i] - b[i]:
    /*
    a[i] and b[i] should be similar
    hence sum of ( A[odd] - A[even] )*/

    ll maxX = 0;
    ll minX = 0;

    rep(i, 0, n / 2)
    {
        maxX += a[i + (n / 2)] - a[i];
        minX += a[2 * i + 1] - a[2 * i];
    }

    maxX = abs(maxX);
    minX = abs(minX);

    cout << minX << " " << maxX << endl;

    return 0;
}