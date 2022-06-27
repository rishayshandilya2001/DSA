#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
   int a[7]={12,3,2,64,5,7,9};
   int maxy=max(a[0],a[1]);
   int miny=min(a[0],a[1]);
   for(int i=2;i<7;i++)
   {
       if(a[i]<miny)
       miny=a[i];
       if(a[i]>maxy)
       maxy=a[i];
   }
   cout<<maxy<<endl;
   cout<<miny<<endl;
}
