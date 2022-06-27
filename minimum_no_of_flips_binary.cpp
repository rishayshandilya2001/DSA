
#include <iostream>

using namespace std;
#include<bits/stdc++.h>
int main()
{
    
  string s="0001010111";
  int count1=0;
  int count2=0;
  for(int i=0;i<s.length();i++)
  {
      if((i%2!=0 && s[i]!=0) ||  (i%2==0 &&  s[i]!=1))
      {
          count1++;
      }
      
  }
  
  for(int i=0;i<s.length();i++)
  {
      if(i%2!=0 && s[i]!=1)
      {
          count2++;
      }
      
      else if(i%2==0 &&  s[i]!=0)
      {
          count2++;
      }
  }
  cout<<count1;
  cout<<count2;
}