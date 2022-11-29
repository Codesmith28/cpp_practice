#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int cl = 0, maxl = 0;

    int st = 0, maxst = 0;

    while (1) // this means while true (Boolean)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (cl > maxl)
            {
                maxl = cl;
                maxst = st;
            }
            cl = 0;
            st = i + 1;
        }

        else
        {
            cl++;
            if (arr[i] == '\0')
            {
                break;
            }
            i++;
        }
    }

    cout << maxl << endl;
    for (int i = 0; i < maxl; i++)
    {
        cout << arr[maxst + i] << endl;
    }
    return 0;
}