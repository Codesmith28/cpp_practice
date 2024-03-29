#include <iostream>
using namespace std;

string dup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = dup(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }

    return (ch + ans);
}

int main()
{
    string s;
    cin >> s;
    cout << dup(s);
}
