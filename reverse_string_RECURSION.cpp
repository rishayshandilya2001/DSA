#include <iostream>
using namespace std;
#include<bits/stdc++.h>

string reverse(string s)
{
    if(s.length()==0)
    return "";
    
    string ans=reverse(s.substr(1))+s[0];
    return ans;
    
}

int main()
{
    string s="binod";
    cout<<reverse(s);
    
}