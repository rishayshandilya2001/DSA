#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int first_occurence(int* a,int start,int key,int  size)
{
    if(start==size)
    {
        return -1;
    }
    if(a[start]==key)
    return start;
    
    return first_occurence(a,start+1,key,size);
}
int main()
{
    int a[7]={4,1,2,1,2,5,2};
    cout<<first_occurence(a,0,2,7);
    
}
