#include<bits/stdc++.h>
using namespace std;

void substraskii(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code = ch; //returns the askii code

    string ros = s.substr(1);

    substraskii(ros,ans);
    substraskii(ros,ans+ch);
    substraskii(ros,ans+to_string(code));
}

int main()
{
    string s;
    cin>>s;

    substraskii(s,"");
    return 0;
}