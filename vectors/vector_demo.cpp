#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    // printing vector using for loop:
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // printing vector using pointer/iterator
    vector<int>::iterator it;
    for(it = v.begin(); it!= v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // printing vector using auto-keyword
    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    // removing the last element from vector v:
    v.pop_back();

    // declaring vector size:
    // vector of size 3 is made with all elements = 50
    vector<int> v2(3,50);

    for(auto element:v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    // swapping vector v and v2:
    swap(v,v2);
    
    for(auto element:v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    return 0;
}