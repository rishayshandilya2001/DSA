#include <iostream>
using namespace std;
#include<bits/stdc++.h>

bool sorted(int* a,int size)
{
    if(size==0)
    return true;
    
    if(a[0]>a[1])
    return false;
    
    return sorted(a+1,size-1);
}
int main()
{
    int a[5]={7,8,9,10,12};
    cout<<sorted(a,5);
}