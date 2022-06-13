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
    if(*head==NULL)
    {
        Node* new_node=new Node();
        *head=new_node;
        new_node->data=new_data;
        new_node->next=NULL;
        return;
    }
    Node* new_node=new Node();


    new_node->data=new_data;


    Node* last=*head;


    while(last->next !=NULL)
    {
        last=last->next;
    }

    last->next=new_node;
}
void delete_element(Node** head,int key)
{
  Node* temp=*head;
  Node* prev=NULL;
  if(temp!=NULL && temp->data==key)
  {
      *head=temp->next;
      delete temp;
      return;
  }
  else{
      while(temp!=NULL && temp->data!=key)
      {
          prev=temp;
          temp=temp->next;
      }
      if(temp==NULL)
      return ;
      prev->next=temp->next;
      delete temp;
      return;
  }
    
}
int main(){

Node* head=NULL;
push(&head,1);
push(&head,2);
push(&head,3);
push(&head,4);

delete_element(&head,2);

readLinkedList(head);


return 0;

}