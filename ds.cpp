#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;
node* makeNode(int x){
    node * newNode= new node(); 
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
void duyet(node *head){
    while(head !=NULL){
        cout<<head->data<<" "<<endl;
        head=head->next;
    }
}
void pushFront(node *&head,int x){
    node *newNode=makeNode(x);
    newNode->next=head;
    head=newNode;
}
void pushBack(node *&head,int x){
    node *temp = head;
    node *newNode=makeNode(x);
    if(temp==NULL){
        temp=newNode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
int main(){
    node *head=NULL;
    for(int i=0;i<5;i++){
        pushFront(head,i);
    }
     for(int i=0;i<5;i++){
        pushBack(head,i);
    }
    duyet(head);
}