#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a[7]={10,7,4,6,8,10,12};
    int diff=a[0]-a[1];
    int count=0;
    int maxcount=-1;
    for(int i=0;i<6;i++)
    {
       if(a[i]-a[i+1]==diff)
       {
           count++;
       }
    else
    {
        diff=a[i]-a[i+1];
        count=1;
    }
    if(count>maxcount)
    maxcount=count;
    }
    cout<<maxcount+1;
}