#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector<int> v;
    int a[6]={1,2,3,4,5,6};
    int max=INT_MIN;
    int cursum=0;
    int k=3;
    for(int i=0;i<3;i++)
    cursum+=a[i];
    v.push_back(cursum);
    for(int i=k;i<k+3;i++)
    {
        cursum=cursum-a[i-k]+a[i];
        v.push_back(cursum);
    }
    
    for(auto x: v)
    cout<<x<<" ";
  
}