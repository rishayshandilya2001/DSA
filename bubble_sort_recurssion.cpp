#include <iostream>
using namespace std;

void  bs(int*a,int size)
{
   if(size==0)
   {
       return ;
       
   }
       for(int i=0;i<size;i++)
       {
       if(a[i]>a[i+1])
       {
           swap(a[i],a[i+1]);
       }
   }
   bs(a,size-1);
   
   
}

int main()
{
    int a[5]={3,6,2,4,1};
    bs(a,5);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}
