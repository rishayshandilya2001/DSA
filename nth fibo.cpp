#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the no";
  cin>>n;
  int a=0;
  int b=1;
  int temp=0;
  for(int i=2;i<=n;i++)
  {
      temp=a+b;
      a=b;
      b=temp;
  }
  cout<<temp;
}
