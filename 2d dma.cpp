#include <iostream>
using namespace std;
int main()
{
   int** p=new int*[3];
   for(int i=0;i<3;i++)
   {
       p[i]=new int[3];
       for(int j=0;j<3;j++)
       {
           p[i][j]=i+1;
       }
   }
   
   for(int k=0;k<3;k++)
   {
       for(int l=0;l<3;l++)
       {
           cout<<p[k][l]<<"  ";
       }
       cout<<"\n";
   }
   
   for(int i=0;i<3;i++)
   {
       delete []p[i];
   }
   delete []p;
}
