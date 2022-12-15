#include <bits/stdc++.h>
using namespace std;

void allsubstr(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    allsubstr(ros, ans);
    allsubstr(ros, ans + ch);
}

int main()
{
    string s;
    cin >> s;
    allsubstr(s, "");
}