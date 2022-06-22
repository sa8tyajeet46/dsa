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
void addtofront(int x,Node** head)
{
    Node* new_node=new Node(x);
    new_node->next=(*head);

    if((*head)==NULL)
    {
        (*head)=new_node;
        return;
    }
    (*head)->prev=new_node;
    (*head)=new_node;

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
int main(){
Node* head=NULL;

addtofront(3,&head);
addtofront(2,&head);

addtofront(1,&head);


read(head);


    return 0;
}