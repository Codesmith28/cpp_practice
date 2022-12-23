#include<bits/stdc++.h>
using namespace std;

int frndPair(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
        // if n=0 then no possible way
        // if n=1 then only 1 way : single
        // if n=2 then only 2 ways : either paired or both single
    }

    return frndPair(n-1) + frndPair(n-2)*(n-1);
    // n-1 : shows nth person is left single
    // (n-2)*(n-1) : shows nth person can be paired with any of n-1 people and then call function for n-2 people
}

int main()
{
    cout<<"Number of people: \n";
    int n; cin>>n;
    cout<<frndPair(n)<<endl;
    return 0;

}