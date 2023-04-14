#include <bits/stdc++.h>
using namespace std;
/* (╯°□°)╯︵ ┻━┻ */
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second

#define sz(x) ((int)(x).size())
#define pb push_back
#define pf push_front

#define pq priority_queue<int, vi>
#define pqg priority_queue<int, vi, greater<int>>
#define mls multiset

#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define endl '\n'

#define minE(x) *min_element(all(x))
#define maxE(x) *max_element(all(x))
#define rev(x) reverse(all(x))

// decimal to binary
string toBin(int value)
{
    string r = "";
    while (value)
        r = (value % 2 ? "1" : "0") + r, value /= 2;
    return r;
}

// last digit (x^n)
int lastDigit(int x, int n)
{
    int cycle[4];
    cycle[0] = x % 10;
    rep(i, 1, 4)
    {
        cycle[i] = (cycle[i - 1] * cycle[0]) % 10;
    }
    return (n == 0 ? 1 : cycle[(n - 1) % 4]);
}

void solve()
{
    // find the longest substring which does not have any repeating characters

    // we will mark the position of each char
    /* at ith char we will check the prev occ and decide to make substr accordingly */

    // i will be our iterator and start will store how many recurring chars are encountered
    // start will be initialized with -1

    string s;
    cin >> s;

    vi ch(256, -1);
    // ascii codes only upto 256

    // we initialized start with -1 as all our chars are initializes with -1 due to 0 baseed indexing
    int mx = 0, start = -1;
    rep(i, 0, s.length())
    {
        // this condition will only hit when a recurring character is found
        if (ch[s[i]] > start)
        {
            start = ch[s[i]];
        }

        // changing the value at char to curr index
        ch[s[i]] = i;
        // finding maximum of the lengths
        mx = max(mx, i - start);
    }

    cout << mx << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCases = 1;
    // cin>>testCases;
    cout << setprecision(10) << fixed;
    while (testCases--)
    {
        solve();
    }
    return 0;
}