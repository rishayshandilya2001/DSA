#include <iostream>
using namespace std;

bool ls(int* a,int n,int key)
{
    if(n==0)
    {
        return false;
    }
    
    if(a[0]==key)
    return true;
    
    bool t=ls(a+1,n-1,key);
    return t;
   
}

int main()
{
    int a[5]={1,2,7,3,5};
    cout<<ls(a,5,23);
}
