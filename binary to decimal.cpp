#include <iostream>
using namespace std;
#include <cmath>
#include<bits/stdc++.h>
int main()
{
  int n;
  cin>>n;
  int dec=0;
  int i=0;
  while(n)
  {
      int bit=n&1;
      dec=bit*pow(2,i)+dec;
      n=n/10;
      i+=1;
  }
  cout<<dec;
}
