#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void readLinkedList(Node* head){
Node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
void push(Node** head,int new_data)
{
    Node* new_node=new Node();


    new_node->data=new_data;


    Node* last=*head;


    while(last->next !=NULL)
    {
        last=last->next;
    }

    last->next=new_node;
}
int main(){

Node* head=NULL;
Node* second=NULL;
Node* third=NULL;

Node* four=NULL;
four=new Node();

head=new Node();
second=new Node();
third=new Node();
  

head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=four;





four->data=4;
four->next=NULL;

push(&head,5);

readLinkedList(head);


return 0;

}