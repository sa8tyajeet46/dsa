#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int x){
        data=x;
        prev=next=NULL;
    }
};
void addtoend(int x,Node** head)
{
    Node* new_node=new Node(x);
    if((*head)==NULL)
    {
        (*head)=new_node;
        return;
    }
    Node* temp=(*head);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    new_node->prev=temp;
    temp->next=new_node;
}
void read(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
void reverse(Node** head)
{
    Node* left=(*head);
    Node* right=(*head);
    while(right->next!=NULL)
    {
        right=right->next;
    }
    while(left!=right && left->prev!=right)
    {
        swap(left->data,right->data);
        left=left->next;
        right=right->prev;
    }
}
int main(){
Node* head=NULL;

addtoend(1,&head);
addtoend(2,&head);
addtoend(3,&head);
addtoend(4,&head);
addtoend(5,&head);
addtoend(6,&head);

read(head);
reverse(&head);
read(head);


    return 0;
}