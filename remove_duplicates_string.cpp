#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void removeduplicates(string s)
{
    if(s.length()==0)
    return;
    if(s[0]!=s[1])
    {
        cout<<s[0];
        removeduplicates(s.substr(1));
        
    }
    else
    {
      removeduplicates(s.substr(1));
    }
    
    
}
int main()
{
   string s="aaabbbecccdd";
   removeduplicates(s);
   
    
}
