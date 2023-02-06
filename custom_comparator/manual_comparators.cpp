#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;

// sort wrt to ss
bool comp_ss(pii p1, pii p2)
{
    // decreasing order:
    // return p1.ss > p2.ss;

    // increasing order:
    return p1.ss < p2.ss ;
}


int main()
{
    int n;
    cin >> n;

    vii v;
    rep(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    // normal sorting:
    // by default considers ff
    // sort(v.begin(), v.end());

    // manaul:
    sort(v.begin(), v.end(), comp_ss);

    rep(i, 0, n)
    {
        cout << v[i].ff << "  " << v[i].ss << endl;
    }
    cout << "\n";
    return 0;
}