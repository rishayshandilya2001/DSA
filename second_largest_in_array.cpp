#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={45,3,5,89,2,1,132};
    int l=INT_MIN;
    int s=INT_MIN;
    for(int i=0;i<7;i++)
    {
        if(a[i]>l)
        {
            s=l;
            l=a[i];
        }
    }
    cout<<s;
}
