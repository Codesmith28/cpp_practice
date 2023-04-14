#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repr(i, a, b) for (int i = a; i >= b; i--)
#define ff first
#define ss second

using namespace std;
/* (╯°□°)╯︵ ┻━┻ */

int postfixEval(string s)
{
    stack<int> st;
    rep(i, 0, s.length())
    {
        if (s[i] >= '0' and s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch(s[i])
            {
                case '+':
                    st.push(op1+op2);
                    break;
                
                

            }
        }
    }
}

void solve()
{
    string s;
    cin >> s;
}

int32_t main()
{
    int testCases = 1;
    // cin>>testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}