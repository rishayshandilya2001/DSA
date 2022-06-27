#include <iostream>
using namespace std;

int partition(int*a,int s,int e)
{
    int p=a[s];
    int count=0;
    for(int i=s;i<=e;i++)
    {
        if(a[i]<p)
        count+=1;
    }
    swap(a[count+s],a[s]);
    
    int i=s;
    int  j=e;
    while(i<j)
    {
        if(a[i]<p)
        {
            i++;
        }
        else if(a[j]>p)
        {
            j--;
        }
        else
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return s+count;
}
void  quicksort(int*a,int s,int e)
{
    if(s>=e)
    return;
    int pep=partition(a,s,e);
    quicksort(a,s,pep-1);
    quicksort(a,pep+1,e);
    
}
int main()
{
    int a[8]={5,1,3,8,2,7,4,6};
    quicksort(a,0,7);
    for(int k=0;k<=7;k++)
    cout<<a[k]<<" ";
}
