#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a[5]={1,2,3,7,5};
    int sum=12;
    for(int i=0;i<5;i++)
    {
        int sums=0;
        for(int j=i;j<5;j++)
        {
            sums+=a[j];
            if(sums==sum)
            {
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
    
}