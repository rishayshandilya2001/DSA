#include <iostream>
using namespace std;

int bs(int* a,int key,int s,int e)
{
    if(s>e)
    {
        return -1;
    }
    
    int mid=(s+e)/2;
    
    
    if(a[mid]==key)
    return mid;
    
    else if(a[mid]>key)
    return bs(a,key,s,mid-1);
    
    else {
    return bs(a,key,mid+1,e);}
}

int main()
{
    int a[5]={1,2,3,7,9};
    cout<<bs(a,7,0,4);
}
