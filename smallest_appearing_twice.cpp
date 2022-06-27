#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a[7]={1,5,3,4,3,5,6};
    int small=INT_MAX;
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(a[i]==a[j])
            {
                if(a[i]<small)
                {
                    small=a[i];
                }
            }
        }
    }
    int j=0;
    while(j<7)
    {
        if(a[j]==small)
        {
            cout<<j;
            break;
        }
        j++;
    }
    
}