#include <iostream>
using namespace std;
#include<bits/stdc++.h>

class node
{
    public:
    int data;
    node* next;
    
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

struct mystack
{
  node* head;
  int count;
  mystack()
   {
       
       node* head=NULL;
       count=0;
   }
   
    int getsize()
    {
        return count;
    }
    
    bool isempty()
    {
        return count==0;
    }
    void push(int n)
   {
       node* temp=new node(n);
       temp->next=head;
       head=temp;
   }
   
   int pop()
   {
       int value=head->data;
       head=head->next;
       count--;
       return value;
   }
   
   int top()
   {
       if(isempty())
       {
           cout<<"stack is empty";
       }
       return head->data;
   }
};

int main()
{
   mystack s;
   for(int i=0;i<4;i++)
   {
       s.push(i);
   }
   
   cout<<s.pop();
}