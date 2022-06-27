#include <iostream>
using namespace std;

struct mystack
{
    int* arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap=c;
        arr=new int[c];
        top=-1;
    }
    
    void push(int n)
    {
        top++;
        arr[top]=n;
    }
    
    int pop()
    {
       int res=arr[top];
       top--;
       return res;
       
        
    }
    
    int peek()
    {
        return arr[top];
    }
    
    int size()
    {
        return top+1;
    }
    
    bool isempty()
    {
        return (top==-1);
    }
};

int main()
{
   mystack s(5);
   s.push(10);
   s.push(20);
   s.push(30);
   cout<<s.pop()<<endl;
   cout<<s.peek()<<endl;
}