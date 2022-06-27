#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isorted(int* a, int size)
{
    if(size==1)
    return true;
    
    
    if(a[0]>a[1])
    {
       return false;
    }
    return isorted(a+1,size-1);
   
    
    
}
int main()
{
    int a[5]={2,17,34,89,122};
   
    bool t= isorted(a,5);
    cout<<t;
}
