
#include <iostream>

using namespace std;

int main()
{
    
    int a[4]={10,11,12,14};
    int max=0,curr=1;
    for(int i=0;i<4;i++)
    {
        if((a[i]%2==0 && a[i+1]%2!=0) || (a[i]%2==0 && a[i+1]%2!=0))
        {
            curr+=2;
        }
        if(curr>max)
        max=curr;
        
        else
        {
            curr=0;
        }
    }
    cout<<max;
}