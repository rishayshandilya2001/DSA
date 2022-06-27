
#include <iostream>

using namespace std;
#include<bits/stdc++.h>
int main()
{
    
   int a[5]={1,2,2,2,3};
   for(int i=0;i<5;i++)
   {
      int count=0;
      for(int j=i;j<5;j++)
       {
           if(a[i]==a[j])
           count++;
       }
       if(count>=2)
       {
           cout<<a[i];
           break;
       }
   }
}