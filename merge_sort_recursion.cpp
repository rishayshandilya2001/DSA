#include <iostream>
using namespace std;
void merge(int*a,int begin,int mid,int end)
{
    int output[end-begin+1];
    int i=begin;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=end)
    {
        if(a[i]<a[j])
    {
        output[k++]=a[i];
        i++;
    }
    else if(a[i]>a[j])
    {
        output[k++]=a[j];
        j++;
    }
    }
    
    while(i<=mid)
    {
        output[k++]=a[i];
        i++;
    }
    
    while(j<=end)
    {
        output[k++]=a[j];
        j++;
    }
    int m=0;
    for(int i=begin;i<=end;i++)
    {
        a[i]=output[m];
        m++;
    }
    
}




void mergesort(int*a,int begin,int end)
{
    if(begin>=end)
    return;
    int mid=(begin+end)/2;
    mergesort(a,begin,mid);
    mergesort(a,mid+1,end);
    merge(a,begin,mid,end);
}


int main()
{
    int a[8]={4,2,7,5,6,9,3,8};
    mergesort(a,0,7);
    for(int i=0;i<8;i++)
    cout<<a[i]<<" ";
    
    
}
