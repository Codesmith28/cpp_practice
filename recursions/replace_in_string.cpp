#include <iostream>
#include <string>
using namespace std;

void rep(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        rep(s.substr(2));
        /* due to substr(2) the string will continue from the elements after 2 elements... */
    }
    else
    {
        cout << s[0];
        rep(s.substr(1));
    }
}

int main()
{
    string s;
    cin >> s;
    rep(s);
}