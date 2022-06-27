#include <iostream>
using namespace std;

void  ss(int*a,int begin,int size)
{
   if(begin>=size-1)
   return;
   int minindex=begin;
   for(int i=begin;i<size;i++)
   {
       if(a[i]<a[minindex])
       minindex=i;
   }
   swap(a[begin],a[minindex]);
   ss(a,begin+1,size);
   
   
}

int main()
{
    int a[5]={3,6,2,4,1};
    ss(a,0,5);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}
