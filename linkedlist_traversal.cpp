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
int main()
{
 node* head=new node(10);
 node* n2=new node(20);
 node* n3=new node(30);
 head->next=n2;
 n2->next=n3;
 print(head);


 
}
