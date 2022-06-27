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

class queueusingll
{
    node* head;
    node* tail;
    int count;
    
    
    public:
    
    queueusingll()
    {
    node* head=NULL;
    node* tail=NULL;
    int count=0;
    }
    
    int size()
    {
        return count;
    }
    
    bool isempty()
    {
        return count==0;
    }
    
    void enqueue(int element)
    {
        node* newnode=new node(element);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        count++;
    }
    int dequeue()
    {
       if(isempty())
       {
          cout<<"queue is  empty"<<endl;
          return 0;
       }
       
       int returnvalue=head->data;
        node* temp=head;
        head=head->next;
        delete temp;
        count--;
        return head->data;
        
    }
};

int main()
{
   queueusingll q;
   for(int i=0;i<5;i++)
   {
       q.enqueue(i);
   }
   for(int i=0;i<5;i++)
   {
       cout<<q.dequeue()<<endl;
   }
}