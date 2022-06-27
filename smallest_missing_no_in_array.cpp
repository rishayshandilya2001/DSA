#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a[6]={0,-9,1,3,-4,5};
    vector<bool> v(1e6,false);
    for(int i=0;i<6;i++)
    {
        if(a[i]>=0)
        {
            v[a[i]]=true;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {cout<<i;
        break;}
    }
    
    
}