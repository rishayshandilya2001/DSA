#include <iostream>
using  namespace std;

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



void print(node* head)
{
    node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<"-";
        curr=curr->next;
    }
}

node* reverseknodes(node* head,int k)
{
    node*curr=head;
    node*  prev=NULL;
    node* temp=NULL;
    int count=0;
    while(curr!=NULL && count<k)
    {
    temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
    count+=1;
    }
    if(temp!=NULL)
    {
        head->next=reverseknodes(temp,k);
    }
    return prev;
}

int main()
{
node* head=new node(10);
 node* n2=new node(20);
 node* n3=new node(30);
 node* n4=new node(40);
 node* n5=new  node(50);
 node* n6=new node(60);
 head->next=n2;
 n2->next=n3;
 n3->next=n4;
 n4->next=n5;
 n5->next=n6;
 
 print(head);
 cout<<endl;
node*prev=NULL;
head=reverseknodes(head,3);
print(head);
 

 
}