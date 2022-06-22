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
}
Node* sort(Node* head){
    Node* res=NULL;
    Node* first=head;
    Node* last=head;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    while(1){
        if(last==first)
        {
            addtoend(last->data,&res);
            return res;
        }
        if(first->data>last->data)
        {
            addtoend(last->data,&res);
            last=last->prev;
        }
        else
        {
            addtoend(first->data,&res);
            first=first->next;
        }
    }
}
int main(){
Node* head=NULL;

addtoend(1,&head);
addtoend(5,&head);
addtoend(7,&head);
addtoend(4,&head);
addtoend(2,&head);

head=sort(head);
read(head);


    return 0;
}