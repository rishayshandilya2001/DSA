#include <iostream>
using namespace std;

int last_occurence(int* a,int s,int e,int key)
{
  int mid=(s+e)/2;
  int ans=-1;
  while(s<=e)
  {
      if(a[mid]==key)
      {
      ans=mid;
      s=mid+1;
      }
      
      else  if(a[mid]>key)
      e=mid-1;
      
      else
      s=mid+1;
      
      mid=(s+e)/2;
       
  }
  return ans;
}


int main()
{
    int a[7]={1,2,3,4,4,4,7};
    cout<<"first occurence of 4 is "<<last_occurence(a,0,6,4);
}