#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int new_data){
        data=new_data;
        next=NULL;
    }
};
Node* addtobegin(Node* last,int new_data)
{
if(last!=NULL)
return last;
Node* temp=new Node {new_data};
last=temp;
temp->next=last;
return last;
}
Node* pushFront(Node* last,int new_data)
{
if(last==NULL)
return addtobegin(last,new_data);

Node* temp=new Node {new_data};
temp->next=last->next;
last->next=temp;
return last;
}
int main(){
    Node* head;
    head=pushFront(head,1);
    head=pushFront(head,2);
    cout<<head->data<<" "<<head->next->data;
    return 0;
}
