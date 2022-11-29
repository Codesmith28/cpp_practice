#include <iostream>
using namespace std;

int main()
{
    cout << "amount of money:\n";
    int amo;
    cin >> amo;
    int choc;
    int wrap;

    cout << "cost of 1 chocolate:\n";
    int p;
    cin >> p;

    choc = amo / p;
    wrap = choc;

    cout << "number of wrappers for 1 chocolate:\n";
    int x;
    cin >> x;

    int rem = 0;
    int quo = 0;

    while (wrap >= x)
    {

        rem = wrap % x;
        quo = wrap / x;
        choc = choc + quo;
        wrap = quo + rem;
    }

    cout << "max chocolates possible: " << choc << endl;

    return 0;
}