#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int* arr,int s,int e)
{
   if(s>=e) 
   {
       return ;
   }
   swap(arr[s],arr[e]);
   reverse(arr,s+1,e-1);
}
int main()
{
    int a[5]={2,17,34,89,122};
   reverse(a,0,4);
   for(int i=0;i<5;i++)
   cout<<a[i]<<" ";
}
