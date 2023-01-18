#include <bits/stdc++.h>
using namespace std;

// function overloading
/*
functions have the same name but diff outputs due to diff arguements...
*/

class Naboo
{
public:
    void yay()
    {
        cout << "Func wiht no arguments\n";
    }
    void yay(int x)
    {
        cout << "Func with int argu\n";
    }
    void yay(double x)
    {
        cout << "Func with dub argu\n";
    }
};

int main()
{
    Naboo obj;
    obj.yay();
    obj.yay(45);
    obj.yay(45.5);

    return 0;
}