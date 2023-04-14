#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;
/* (╯°□°)╯︵ ┻━┻
reverse a stack without creating another stack using recursion */

// call by reference as we want to change the stack
void insertAtBottom(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int y = s.top();
    s.pop();
    insertAtBottom(s, x);
    s.push(y);
}

void rev(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int x = s.top();
    s.pop();
    // recursive call
    rev(s);
    // when all calls are completed then we will push the elements
    insertAtBottom(s, x);
}

void solve()
{
    // this can be done using recursion
    cout << "ENTER THE SIZE OF THE STACK: \n";
    int n;
    cin >> n;

    stack<int> s;
    cout << "ENTER THE ELEMENTS OF THE STACK: " << endl;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    rev(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int32_t main()
{
    int testCases = 1;
    // cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}