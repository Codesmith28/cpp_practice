#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;

/* YOU ARE GIVEN N ACTIVITIES WIHT START AND END TIMES
FIND THE MAXIMUM NUMBER OF ACTIVITIES THAT CAN BE DONE*/
/* WE WILL  CHOOSE THE ACTIVITY WHICH WILL END FIRST */

/* SORT THE ACTIVITES WRT THEIR END-TIMES! */
int main()
{
    int n;
    cin >> n;
    vector<vi> v;

    rep(i, 0, n)
    {
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }

    sort(v.begin(), v.end(), [&](vi &a, vi &b)
         { return a[1] < b[1]; });

    int take = 1;
    int end = v[0][1];

    rep(i, 1, n)
    {
        if (v[i][0] >= end)
        {
            take++;
            end = v[i][1];
        }
    }

    cout << take << "\n";

    return 0;
}