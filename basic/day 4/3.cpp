#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char op;
        cin >> op;

        if (op == 'b' || op == 'B')
        {
            cout << "BattleShip\n";
        }

        else if (op == 'c' || op == 'C')
        {
            cout << "Cruiser\n";
        }

        else if (op == 'd' || op == 'D')
        {
            cout << "Destroyer\n";
        }

        else if (op == 'f' || op == 'F')
        {
            cout << "Frigate\n";
        }
    }
    return 0;
}