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
/* (╯°□°)╯︵ ┻━┻
evaluating prefix notations: */

int prefixEval(string s)
{
    stack<int> st;
    repr(i, s.length() - 1, 0)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }
    return st.top();
}

void solve()
{
    // we will the stack from the end of the expression
    // then as we encounter an operator we pop the previous two elements and perform the operation and push the result back to the stack

    string s;
    cin >> s;
    cout << prefixEval(s) << endl;
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