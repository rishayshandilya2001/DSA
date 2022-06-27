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

node* head=dynamicll();
print(head);


 
}
