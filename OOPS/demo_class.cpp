#include <bits/stdc++.h>
using namespace std;

class student
{   
    string name;
    public:
    int age;
    bool gender;
    
    // a function to make private attributes public:
    void setName (string s)
    {
        name = s;
    }


    // a function to print the data of a class:
    void printInfo()
    {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = ";
        gender == 0 ? cout<<"male\n" : cout<<"female\n";
    }


};


// we can only access the attributes of a class within the class (inaccessible)
//by default all attributes of class are private / local
// to make them global we use public:


int main()
{
    // we can make an array for different objects

    int n;cin>>n;
    student arr[n];
    for(int i=0; i<n; i++)
    {
        string s;
        cout<<"name: \n";
        cin>>s;
        arr[i].setName(s);

        cout<<"age: \n";
        cin>>arr[i].age;

        cout<<"gender: \n";
        cin>>arr[i].gender;
    }

    for(int i=0; i<n; i++)
    {
        arr[i].printInfo();
    }
 
    return 0;
}