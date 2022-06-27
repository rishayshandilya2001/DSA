#include <iostream>
using namespace std;
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

int length(node* head)
{
    if(head==NULL)
    {
        return 0;
    }
    return 1+length(head->next);
}
int main()
{
node* head=new node(10);
 node* n2=new node(20);
 node* n3=new node(30);
 node* n4=new node(40);
 node* n5=new  node(50);
 head->next=n2;
 n2->next=n3;
 n3->next=n4;
 n4->next=n5;
 
 print(head);
 cout<<endl;
 cout<<"length of linked list is "<<length(head);
}