#include <iostream>
using namespace std;

int bs(int* a,int key)
{
    int s=0;
    int e=7;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(a[mid]==key)
        return mid;
        else if(a[mid]<key)
        s=mid+1;
        else if(a[mid]>key)
        e=mid-1;
        
        mid=(s+e)/2;
        
    }
  return -1;  
    
}
int main()
{
    int a[8]={1,3,5,7,9,11,13,15};
    cout<<bs(a,13);
}