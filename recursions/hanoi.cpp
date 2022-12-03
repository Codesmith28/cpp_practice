#include<iostream>
using namespace std;

/* blocks arranged as pyramid...small to big
we need to move the entire pyramid from A to C block by block
such that we cannot put a big block on small block and 
we can lift one block at a time...
we have places A ,B ,C i.e.
source rod,helper rod,destination rod
 */

void hanoi(int n,char sou,char dest,char help)
{
    if(n==0)
    {
        return;
    }

    hanoi(n-1,sou,help,dest);
    cout<<"Move from "<<sou<<" to "<<dest<<endl;
    hanoi(n-1,help,dest,sou);

}


int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','C','B');
    return 0;
}