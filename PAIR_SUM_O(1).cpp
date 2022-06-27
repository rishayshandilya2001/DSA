#include <iostream>
using namespace std;
int main()
{
    int a[8]={2,4,7,11,14,16,20,21};
    int sum=25;
    int s=0;
    int e=7;
    while(s<e)
    {
        if(a[s]+a[e]==sum)
        {
            cout<<s<<" "<<e;
            break;
        }
        
        else if(a[s]+a[e]<sum)
        {
            s++;
        }
        
        else if(a[s]+a[e]>sum)
        {
            e--;
        }
    }
}
