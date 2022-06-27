#include <iostream>
using namespace std;

int squareroot(int n)
{
    int  low=1;
    int high=n;
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(mid*mid==n)
        return mid;
        
        else if(mid*mid>n)
        high=mid-1;
        
        else
        low=mid+1;
        
        mid=(low+high)/2;
    }
    
    return mid;
}

int main()
{
    cout<<squareroot(156);
}