#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={0,0,1,1,1};
    int count=2;
    int i;
    while(count)
    {
        int temp=a[0];
        for( i=0;i<4;i++)
        {
            a[i]=a[i+1];
        }
        a[i]=temp;
        count--;
    }
    for( i=0;i<5;i++)
    cout<<a[i]<<" ";
        
    
}
