#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;
/*minimum possible stops to make in order to reach the town

initial units of fuel = p
initial distance from town = l*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; // number of stops
        cin >> n;

        // info of stops - dist from start,fuel available
        vii a(n);
        rep(i, 0, n)
        {
            cin >> a[i].ff >> a[i].ss;
        }

        // dist from town and initial fuel present
        int l, p;
        cin >> l >> p;

        // converting dist from start -> dist from truck
        rep(i, 0, n)
        {
            a[i].ff = l - a[i].ff;
        }

        // sorting the vii acc to dist from truck(increasing order) 
        sort(a.begin(), a.end());

        // storing count of the stops;
        int stops = 0;

        // storing current amo of fuel:
        int curr = p;

        // maxheap:
        priority_queue<int, vi> maxHeap;

        bool flag = 0;

        //  maintaining maxHeap which will store fuels
        rep(i, 0, n)
        {
            // if curr fuel is sufficient for full journey
            if (curr >= l)
            {
                break;
            }

            // only when our capacity is less than to reach stop (dist in increasing order)
            // (all dist are from initial of truck)
            while (curr < a[i].ff)
            {
                // no fuel to reach any stop => -1
                if (maxHeap.empty())
                {
                    flag = 1;
                    break;
                }

                stops++;
                curr += maxHeap.top();
                maxHeap.pop();
            }

            // as result = - 1 then break from rep
            if (flag)
            {
                break;
            }

            // putting our fuel obtained from stop in maxHeap
            // this fuel will be used to reach the next stop
            maxHeap.push(a[i].ss);
        }

        if (flag)
        {
            cout << -1 << endl;
            continue;
        }

        while (!maxHeap.empty() && curr < l)
        {
            curr += maxHeap.top();
            maxHeap.pop();
            stops++;
        }

        if (curr < l)
        {
            cout << -1 << endl;
            continue;
        }

        cout << stops << endl;
    }
    return 0;
}