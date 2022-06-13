#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertAtFront(Node** head,int new_data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head);
    (*head)=new_node;
}
void readLinkedList(Node* head){
Node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
int main(){

Node* head=NULL;
Node* second=NULL;
Node* third=NULL;

head=new Node();
second=new Node();
third=new Node();
  

head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=NULL;

insertAtFront(&head,0);

insertAtFront(&head,-1);

readLinkedList(head);


return 0;

}