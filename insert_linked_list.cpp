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

node* insertll(node* head,int data,int pos)
{
    node* newnode=new node(data);
    node* curr=head;
    if(pos==0)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        for(int i=0;i<=pos-2;i++)
        {
            curr=curr->next;
        }
        newnode->next=curr->next;
        curr->next=newnode;
        
    }
    return head;
}

void print(node* head)
{
    node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<"-";
        curr=curr->next;
    }
}
int main()
{
node* head=new node(10);
 node* n2=new node(20);
 node* n3=new node(30);
 head->next=n2;
 n2->next=n3;
 print(head);
 cout<<endl;
 head=insertll(head,40,2);
 print(head);

 
}
