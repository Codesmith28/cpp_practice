#include <bits/stdc++.h>
using namespace std;

// fix one play with rest and in each iteration one more char is fixed
void permutations(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string remains = s.substr(0, i) + s.substr(i + 1);
        // 0 denotes the starting index of substr
        // i denotes the length of substr
        permutations(remains, ans + ch);
    }
}

int main()
{
    string s;
    cin >> s;
    permutations(s, "");
    return 0;
}