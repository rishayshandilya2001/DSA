#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={0,0,1,1,1,2,2,3,3,4};
    int l=1,r=1;
   while(r<10)
   {
     if(a[r]==a[r-1])
        {
           r++; 
            
        }  
        else
        {
            a[l]=a[r];
            l++;
            r++;
        }
   }
   cout<<l;
        
    
}
