#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
   int a[10];
   int n;
   cout<<"enter the no of elements";
   cin>>n;
   int i;
   for(i=0;i<n;i++)
   cin>>a[i];
   int max=INT_MIN;
   int min=INT_MAX;
   for(i=0;i<n;i++)
   {
       if(a[i]>max)
       {
           max=a[i];
       }
   }
    for(i=0;i<n;i++)
   {
      if(a[i]<min)
       {
           min=a[i];
       }
   }
   cout<<max<<endl;
   cout<<min<<endl;
   
}