#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
   int a[100];
   int n=5;
   int ele;
   for(int  i=0;i<5;i++)
   {
       cin>>a[i];
   }
   cout<<"enter the element to insert ";
   cin>>ele;
   int pos=3;
   int start=n-1;
   while(pos)
   {
      a[start+1] =a[start];
      start--;
      pos--;
   }
   a[start+1]=ele;
   for(int  i=0;i<6;i++)
   {
       cout<<a[i]<<" ";
   }
   
  
}