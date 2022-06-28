#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;
};

Node* head;


//function to create new node
Node* createNode(int x){
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}


//function to insert node in the front
void insertNodeAtFront(int x){
    Node* newNode = createNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    else{
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        return;
    }
}

//function to insert node at back
void insertNodeAtBack(int x){
    Node* newNode = createNode(x);
    if(head==NULL){
        head = newNode;
        return;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}


//printing nodes from front to rear
void printNodes(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    head = NULL;
    insertNodeAtBack(4);
    insertNodeAtFront(1);
    insertNodeAtFront(2);
    insertNodeAtBack(3);
    printNodes();
    return 0;
}