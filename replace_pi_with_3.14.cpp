#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void replace(string s)
{
    if(s.length()==0)
    return;
    
    if(s.substr(0,2)=="pi")
    {
        cout<<"3.14";
        replace(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replace(s.substr(1));
        
    }
}
int main()
{
   string s="pippxxppiixipi";
   replace(s);
   
    
}
