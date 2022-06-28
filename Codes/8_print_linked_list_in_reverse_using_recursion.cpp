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
    printNodes(p->next);
    cout<<p->data<<" ";
}
int main(){
    head = NULL;
    insertNode(1);
    insertNode(2);
    insertNode(3);
    printNodes(head);
    return 0;
}