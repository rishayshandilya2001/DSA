#include <iostream>
using namespace std;

int fi(int* a,int n,int key,int index)
{
    if(n==0)
    {
        return -1;
    }
    
    if(a[0]==key)
    return index;
    
    int t=fi(a+1,n-1,key,index+1);
    return t;
   
}

int main()
{
    int a[5]={1,2,3,7,7};
    cout<<fi(a,5,7,0);
}
