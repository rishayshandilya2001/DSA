#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=8;
    int mid=(s+e)/2;
    int find=7;
    while(s<=e)
    {
       int element=a[mid/3][mid%3];
       if(element==find)
       cout<<"found";
       
        if(element>find)
       e=mid-1;
       
       else
       s=mid+1;
       
       mid=(s+e)/2;
    }
   
}