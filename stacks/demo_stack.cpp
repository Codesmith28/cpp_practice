#include <iostream>
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
/* (╯°□°)╯︵ ┻━┻ */

class stack
{

    int *arr;
    int top;
    int n = 100;

    // a public constructor that sets the initial or default values

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "No element in stack!" << endl;
            return -1;
        }
        top--;
    } 

    bool empty()
    {
        return top == (-1);
    }
};

void solve()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;

    cout << st.empty() << endl;

    cout << st.pop() << endl;
}

int32_t main()
{
    int testCases = 1;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}