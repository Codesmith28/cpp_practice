#include<bits/stdc++.h>
using namespace std;

int tileWay(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return tileWay(n-1) + tileWay(n-2);
}

int main()
{
    cout<<"You are provided with 2*1 tile.\n"<<"Enter n for 2*n board: \n";
    int n;
    cin>>n;
    cout<<tileWay(n)<<endl;
    return 0;
}