#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={0,0,1,1,1};
    int s=0;
    int e=4;
    while(s<e)
    {
        if(a[s]!=0)
        s++;
        
        else  if(a[e]==0)
        e--;
        
        else
       { 
         swap(a[s],a[e]);
        s++;
        e--;
       }
    }
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
        
    
}
