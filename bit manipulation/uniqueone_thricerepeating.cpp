#include<iostream>
using namespace std;

bool getbit(int n,int pos)
{
    return ( (n&(1<<pos))!=0 );
}

int setbit( int n, int pos)
{
    return(n|(1<<pos));
}

int uniq(int arr[],int n)
{
    int result = 0;
    for(int i=0; i<64; i++)
    {
        int sum=0;
        for(int j=0; j<n; j++)
        {
            // the getbit will only work when 1 is found in the position
            if( getbit(arr[j],i) )
            {
                sum++;
            }
        }
        
        if(sum%3!=0)
        {
            result = setbit(result,i);
        }
        // setbit returns a binary format answer
    }
    return result;
}

int main()
{
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    cout<<uniq(arr,10);
    return 0;
}