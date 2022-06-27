#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n==1 || n==2)
    return 1;
    int f=fibo(n-1)+fibo(n-2);
    return f;
}

int main()
{
    cout<<fibo(8);
}
