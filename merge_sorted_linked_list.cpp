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

node* sortedMerge(node* head1, node* head2)  
{  
    node* newhead=NULL;
    if(head1==NULL)
    {
        return head2;
    }
    
    else if(head2==NULL)
    {
        return head1;
    }
    if(head1->data<head2->data)
    {
    newhead=head1;
    newhead->next=sortedMerge(head1->next,head2);
    }
    else
    {
    newhead=head2;
    newhead->next=sortedMerge(head1,head2->next);
    }
    return newhead;
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



node* dynamicll()
{
    node* head=NULL;
    node* tail=NULL;
    cout<<"enter data , enter -1 to quit";
    int data;
    cin>>data;
    while(data!=-1)
    {
        node* newnode=new node(data);
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
        cout<<"enter data";
        cin>>data;
    }
    return head;
    
}

int main()
{
node* head1=dynamicll();
print(head1);
cout<<"\n";
node* head2=dynamicll();
print(head2);
cout<<"\n";

node* head3=sortedMerge(head1,head2);
print(head3);
cout<<"\n";

 

 
}