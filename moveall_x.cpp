#include <iostream>
using namespace std;
#include<bits/stdc++.h>

string moveallx(string s)
{
    if(s.length()==0)
    return "";
    
    char  ch=s[0];
    string t=moveallx(s.substr(1));
    if(ch=='x')
    {
        return t+ch;
    }
    else
    {
        return ch+t;
    }
    
}
int main()
{
   string s="axbxc";
   cout<<moveallx(s);
   
    
}
