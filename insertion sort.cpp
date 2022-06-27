#include <iostream>
using namespace std;
#include <cmath>
#include<bits/stdc++.h>
int main()
{
 int a[7]={34,23,8,79,6,14,15};
 int i,j;
 for(i=1;i<7;i++)
 {
     int key=a[i];
     j=i-1;
     while(j>=0 && a[j]>key)
     {
         a[j+1]=a[j];
         j--;
     }
     a[j+1]=key;
 }
 for(int k:a)
 {
     cout<<k<<" ";
 }
}
