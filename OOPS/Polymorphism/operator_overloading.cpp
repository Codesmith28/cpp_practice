#include <bits/stdc++.h>
using namespace std;

// operator overloading:
// make sure to write the name of class in proper case
class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.img = img + obj.img;
        res.real = real + obj.real;
        return res;
    }

    void display()
    {
        cout << real << " + " << img << "i\n";
    }
};

int main()
{
    Complex c1(7, 12);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}