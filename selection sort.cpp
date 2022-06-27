#include <iostream>
using namespace std;
#include <cmath>
#include<bits/stdc++.h>
int main()
{
 int a[7]={34,23,8,79,6,14,15};
 int i,j;
 for(i=0;i<7;i++)
 {
     for(j=i+1;j<7;j++)
     {
         if(a[j]<a[i])
         {
            swap(a[j],a[i]); 
         }
         cout<<a[j]<<" "<<a[i]<<"\n";
         
     }
 }
 for(int k:a)
 {
     cout<<k<<" ";
 }
}
