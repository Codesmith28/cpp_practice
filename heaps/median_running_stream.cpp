#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;
/*find the medain of elements at every iteration when they are inserted*/

priority_queue<int, vi, greater<int>> minheap;
priority_queue<int, vi> maxheap;

void insert(int x)
{
    if (minheap.size() == maxheap.size())
    {
        if (maxheap.size() == 0)
        {
            maxheap.push(x);
        }

        if (x < maxheap.top())
        {
            maxheap.push(x);
        }

        else
        {
            minheap.push(x);
        }
    }
    else
    {
        // case 1
        if (maxheap.size() > minheap.size())
        {
            if (x >= maxheap.top())
            {
                minheap.push(x);
            }
            else
            {
                int temp = maxheap.top();
                maxheap.pop();
                minheap.push(temp);
                maxheap.push(x);
            }
        }
        // case 2
        else
        {
            if ( x < minheap.top())
            {
                maxheap.push();
                
            }
        }
    }
}

int main()
{
    /*partition the array into 2 parts*/

    return 0;
}