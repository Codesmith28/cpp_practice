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
    /*markov process : process which depend on the previous state

    at present, take / use the best

    sorting is done first while applying greedy technique */

    /* YOU ARE GIVEN AN ARRAY OF DENOMINATIONS AND VALUE X, YOU NEED TO FIND THE MINIMUM NUMBER OFCOINS REQUIRED TO MAKE VALUE X  AND ARE PROVIDED WITH INFINITE SUPPLY OF COINS*/

    /*
    1) start from the largest value of denominations, till we can include it -> take it

    2) else move on the smaller value */

    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    int x;
    cin >> x;

    sort(a.begin(), a.end(), greater<int>());
    // greater<int>() sorts in decreasing order

    int ans = 0;

    rep(i, 0, n)
    {
        ans += x / a[i];
        x -= (x / a[i]) *a[i];
    }

    cout << ans << endl;

    return 0;
}