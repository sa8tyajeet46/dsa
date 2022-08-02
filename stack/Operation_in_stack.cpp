#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node* next;
    Node(int new_val){
        val=new_val;
        next=NULL;
    }
};

bool isEmpty(Node* root)
{
    return !root;
}

void push(Node** root,int new_val)
{
    Node* new_Node=new Node {new_val};
    new_Node->next=(*root);
    (*root)=new_Node;
}

int pop(Node** root)
{
    if(isEmpty(*root))
    return INT_MIN;
    Node* temp=(*root);
    int pooped=temp->val;
    (*root)=(*root)->next;
    free(temp);
    return pooped;

}

int peak(Node* root)
{
    if(isEmpty(root))
    return INT_MIN;

    return root->val;
}

int main(){
Node* root=NULL;
push(&root,1);
push(&root,2);
push(&root,3);
push(&root,4);
cout<<"The top element of the stack is "<<peak(root)<<"\n";
pop(&root);
cout<<"The top element of the stack is "<<peak(root)<<"\n";

 
 while(!isEmpty(root))
 {
    cout<<peak(root)<<" ";
    pop(&root);
 }
 return 0;
}