#include <iostream>
using namespace std;

int main()
{
    cout << "enter the number: \n";
    int n;
    cin >> n;
    int i;

    bool flag = 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }

        else
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "prime\n";
    }

    else
    {
        cout << "non prime\n";
    }

    return 0;
}
