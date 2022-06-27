
#include <iostream>

using namespace std;

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int sc=0;
    int ec=2;
    int sr=0;
    int er=2;
    
    int total=9;
    int count=0;
    int index;
    while(count<total)
    {
        for(index=sc;index<=ec;index++)
        {
        cout<<a[sr][index]<<"  ";
        count++;
        }
        sr++;
        for(index=sr;index<=er;index++)
         {
        cout<<a[index][ec]<<"  ";
        count++;
        }
        ec--;
        for(index=ec;index>=sc;index--)
         {
        cout<<a[er][index]<<"  ";
        count++;
        }
        er--;
        for(index=er;index>=sr;index--)
         {
        cout<<a[index][sc]<<"  ";
        count++;
        }
        sc++;
        
        
    }
}