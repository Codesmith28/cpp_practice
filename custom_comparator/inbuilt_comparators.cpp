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
    int n;
    cin >> n;
    vi v(n);

    rep(i, 0, n)
    {
        cin >> v[i];
    }

    // simple sort
    // sort(v.begin(), v.end());

    // decending order :
    sort(v.begin(), v.end(), greater<int>());


    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << "\n";

    return 0;
}