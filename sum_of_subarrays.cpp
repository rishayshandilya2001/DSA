#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a[5]={1,2,0,7,2};
    for(int i=0;i<5;i++)
    {
        int sum=0;
        for(int j=i;j<5;j++)
        {
            sum+=a[j];
            cout<<sum<<" ";
        }
    }
}