#include <bits/stdc++.h>
using namespace std;

// runtime polymorphism:

// base class:
class base
{
public:
    virtual void print()
    {
        cout << "This is base class\n";
    }

    void display()
    {
        cout << "Base class display func\n";
    }
};

// derived class:
class derived : public base
{
public:
    void print()
    {
        cout << "This is Derived class\n";
    }

    void display()
    {
        cout << "Derived class display func\n";
    }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr ->display();
    /* here we get only base class in the output (without virtual keyword before void print() )
    
    if we use virtual keyword at the said place we will use the derived class 
    */

    return 0;
}