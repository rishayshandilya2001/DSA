#include <iostream>
using namespace std;

int countways(int n)
{
    if(n==1)
    return 1;
    else if(n==2)
    return 2;
    else if(n==3)
    return 4;
    
    return countways(n-1)+countways(n-2)+countways(n-3);
}

int main()
{
    cout<<countways(8);
    
}
