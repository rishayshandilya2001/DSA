#include <iostream>
using namespace std;
#include <cmath>
#include<bits/stdc++.h>
int main()
{
 string s="abcd";
 vector<string> m;
 for(int i=0;i<s.length();i++)
 {
     string t="";
     t=t+s[i];
     m.push_back(t);
     for(int j=i+1;j<s.length();j++)
     {
        t=t+s[j];
        m.push_back(t);
     }
 }
 for(auto x:m)
 {
     cout<<x<<" ";
 }
}
