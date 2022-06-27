#include <iostream>
using namespace std;

bool sorted(int* a,int n)
{
    if(n==1)
    {
        return true;
    }
    
    if(a[0]>a[1])
    return false;
    
    bool t=sorted(a+1,n-1);
    if(t)
    return true;
    else
    return false;
    
}

int main()
{
    int a[5]={1,2,7,3,5};
    cout<<sorted(a,5);
}
