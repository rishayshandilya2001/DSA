#include <iostream>
using namespace std;
#include <cmath>
#include<bits/stdc++.h>
int main()
{
 int a[5]={34,23,8,79,6};
 int i,j;
 for(i=1;i<=5;i++)
 {
     for(j=0;j<5;j++)
     {
         if(a[j]>a[j+1])
         swap(a[j],a[j+1]);
     }
 }
 for(int k:a)
 {
     cout<<k<<" ";
 }
}
