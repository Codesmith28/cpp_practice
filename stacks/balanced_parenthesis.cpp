#include <bits/stdc++.h>
using namespace std;
/* (╯°□°)╯︵ ┻━┻ */
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define ff first
#define ss second

#define pq priority_queue<int, vi>
#define pqg priority_queue<int, vi, greater<int>>

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

void solve()
{
    string s;
    cin >> s;

    bool flag = 1;

    stack<char> str;
    rep(i, 0, sz(s))
    {
        char ch = s[i];

        if (ch == '(' or ch == '[' or ch == '{')
        {
            str.push(ch);
        }

        else if (ch == '}')
        {
            if (!str.empty() and str.top() == '{')
            {
                str.pop();
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else if (ch == ')')
        {
            if (!str.empty() and str.top() == '(')
            {
                str.pop();
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else
        {
            if (!str.empty() and str.top() == '[')
            {
                str.pop();
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
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