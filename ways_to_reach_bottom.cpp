#include <iostream>
using namespace std;

int waystoreachbottom(int rows,int col,string output[])
{
    if(rows==1)
    {
        output[0]="";
        for(int i=0;i<col-1;i++)
        output[0]+='H';
        return 1;
        
    }
     if(col==1)
    {
        output[0]="";
        for(int i=0;i<rows-1;i++)
        output[0]+='V';
        return 1;
    }
    
    
    string temp[1000];
    int k=0;
    int smalleroutput1size=waystoreachbottom(rows-1,col,output);
    for(int i=0;i<smalleroutput1size;i++)
    {
        temp[k]=output[i]+'V';
        k++;
    }
    int smalleroutput2size=waystoreachbottom(rows,col-1,output);
    for(int i=0;i<smalleroutput2size;i++)
    {
        temp[k]=output[i]+'H';
        k++;
    }
    for(int i=0;i<smalleroutput2size+smalleroutput1size;i++)
    {
        output[i]=temp[i];
    }
    return smalleroutput1size+smalleroutput2size;
}
int main()
{
    string output[1000];
    int t=waystoreachbottom(5,4,output);
    cout<<t<<endl;
    for(int i=0;i<t;i++)
    cout<<output[i]<<endl;
}
