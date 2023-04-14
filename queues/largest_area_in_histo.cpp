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
    int n;
    cin >> n;

    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    // last bar = 0
    a.pb(0);
    /*
    STACK APPROACH:
    wait till a[i]>a[i-1]
    when the condition fails then we get a potential ans as the area will no longer increase*/

    int ans = 0;
    stack<int> st;

    rep(i, 0, n)
    {
        while (!st.empty() and (a[st.top()] > a[i]))
        {
        
            int t = st.top();
            int h = a[t];

            st.pop();
            if (st.empty())
            {
                ans = max(ans, (h * i));
            }

            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, h * len);
            }
        }

        st.push(i);
    }

    cout << ans << endl;
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