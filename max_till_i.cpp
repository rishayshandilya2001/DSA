#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a[6]={1,0,5,4,6,8};
    vector<int> v;
    for(int i=0;i<6;i++)
    {
        int max=INT_MIN;
        for(int j=0;j<=i;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
        }
        v.push_back(max);
    }
    
    for(auto x: v)
    {
        cout<<x<<" ";
    }
}