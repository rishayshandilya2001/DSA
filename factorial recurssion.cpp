#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    return 1;
    int t=n*factorial(n-1);
    return t;
}

int main()
{
    int n=5;
    cout<<factorial(4);
}
