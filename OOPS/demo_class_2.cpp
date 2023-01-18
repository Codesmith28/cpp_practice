#include <bits/stdc++.h>
using namespace std;

class student
{   
    public:
    string name;
    int age;
    bool gender;

    // to achieve this we use constructors

    // this is a default constructor
    student()
    {
        cout<<"Default constructor"<<endl;
    }
    
    // this is parameterized constructor
    student(string s, int a, bool g)
    {
        name = s;
        age = a;
        gender = g;
    }

    //copy constructor
        // to copy all values of a student from a previous student
    

        //paramerterized 
        student(student &a)
        {
            name = a.name;
            age = a.age;
            gender = a.gender;
        }


    // making a destructor which will be called when an attribute data is destroyed

    ~student()
    {
        cout<<"Destroyed\n";
    }
    // will be called when we move out of our main functions as nothing exist outside of it

    void getInfo()
    {
        cout<<"name = "<<name<<"\n";
        cout<<"age = "<<age<<"\n";
        cout<<"gender = ";
        gender == 0 ? cout<<"male \n" : cout<<"female \n";
    }


    bool operator == (student &a)
    {
        if( (name == a.name) && (age==a.age) && (gender = a.gender) )
        {
            return true;
        }
        return false;
    }
};

int main()
{
    // to get attributes as we declare the "student"
    // for this we use a constructor
    student a("Sarthak",18,0);

    student b;

    student c = a;

    c == a ? cout<<"same\n" : cout<<"not same\n";

    return 0;
}