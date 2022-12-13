#include <iostream>
#include <string>
using namespace std;

void rev(string s)
{
    if (s.length() == 0) // base
    {
        return;
    }

    string rest = s.substr(1);
    rev(rest);
    cout << s[0]; // prints the first character
    /* our string decreases by 1 element in very recursion, thus on printing the first element in every recursion we get reversed string */
}

int main()
{
    string s;
    cin >> s;
    rev(s);
}
