#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[7]={7,10,4,10,6,5,2};
    int cm=a[6];
    cout<<cm<<" ";
    for(int i=7-2;i>=0;i--)
    {
        if(a[i]>cm)
        {
            cm=a[i];
            cout<<cm<<" ";
            
        }
    }
    
    
        
    
}
