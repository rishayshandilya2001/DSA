#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void printincreasing(int n)
{
    if(n==0)
    return;
    printincreasing(n-1);
    cout<<n;
}
int main()
{
    printincreasing(5);
}
