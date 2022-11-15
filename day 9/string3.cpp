#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s ="uargfawebiorieqewreyrcoiqewbyrioe";
    int freq[26];

    for(int i=0;i<26;i++)
    {
        freq[i] = 0;
    }

    for(int i=0; i<s.size(); i++)
    {
        freq[ s[i]-'a' ]++;
    }

    char ans = 'a';
    int mf = 0;

    for(int i=0; i<26;i++)
    {
        if( freq[i] > mf )
        {
            mf = freq[i];
            ans = i + 'a';
        }
    }

    cout<<mf<<" "<<ans<<endl;

}