#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* head;

void insertNode(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        Node* temp2 = head;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
}

void printNodes(Node* p){
    if(p==NULL){
        return;
    }
    cout<<p->data<<" ";
    printNodes(p->next);
}

void reverseList(Node* p){
    if(p->next==NULL){
        head = p;
        return;
    }
    reverseList(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

int main(){
    head = NULL;
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(4);
    insertNode(5);
    printNodes(head);
    cout<<"\n";
    reverseList(head);
    printNodes(head);
    return 0;
}