#include <iostream>
using namespace std;

int main()
{
  int a[3][3]={1,2,3,4,5,6,7,8,9};
  int i,j;
  for(j=0;j<3;j++)
  {
      for(i=0;i<3;i++)
      {
          if(j%2==0)
          {
              cout<<a[i][j]<<"  ";
          }
          
          else
          {
              cout<<a[3-i-1][j]<<"  ";
          }
      }
  }
}
