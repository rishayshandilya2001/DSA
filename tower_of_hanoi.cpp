#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void toh(int n,char a, char b, char c)
{
 if(n==0)
 return;
 toh(n-1,a,c,b);
 cout<<"move "<<n<<" disc from "<<a<<" to "<<c<<endl;
 toh(n-1,b,a,c);
}
int main()
{
   toh(3,'a','b','c');
   
    
}
