#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *aptr;
    /*
    we declared the *aptr variable which will point to our varibale a
    we wrote "*" after int;
    this suggests that our pointer shall point to an integer
    */
    aptr = &a;
    /*
    &a give the address of variable a
    thus if we say aptr = &a
    we mean that address of variable a is given to the variable : aptr
    */

    cout << *aptr << endl;

    /*
    if we use *aptr then we get the value of that variable towards which our pointer is pointing
    */
    *aptr = 20;
    /*
    here we changed the value of "a" wihtout using "a" and by using the pointer which points towards "a"
    */
    cout << a << endl;

    return 0;
}