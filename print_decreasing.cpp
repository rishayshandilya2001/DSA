#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void printdecreasing(int n)
{
    if(n==0)
    return;
    cout<<n;
    printdecreasing(n-1);
}
int main()
{
    printdecreasing(5);
}
