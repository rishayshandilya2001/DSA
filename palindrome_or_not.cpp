#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int length(char* ch)
{
    int l=0;
    int  i=0;
    while(ch[i]!='\0')
    {l++;
    i++;}
    
    return l;
}

int main()
{
    char ch[10];
    cout<<"enter the name";
    cin>>ch;
    int st=0;
    int e=length(ch)-1;
    int flag=0;
    while(st<e)
    {
        if(ch[st]!=ch[e])
        {
        cout<<" not palindrome";
        flag++;
        break;
        }
        st++;
        e--;
    }
    if(flag==0)
    cout<<"palindrome";
   
}