#include <iostream>
using namespace std;
#include<bits/stdc++.h>

struct mystack
{
    vector<int> v;
    void push(int n)
    {
        v.push_back(n);
    }
    
    int pop()
    {
       int res=v.back();
       v.pop_back();
       return res;
       
        
    }
    
    int peek()
    {
        return v.back();
    }
    
    int size()
    {
        return v.size();
    }
    
    bool isempty()
    {
        return v.empty();
    }
};

int main()
{
   mystack s;
   s.push(10);
   s.push(20);
   s.push(30);
   cout<<s.pop()<<endl;
   cout<<s.peek()<<endl;
}