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
        return;
    }
    else{
        Node* temp1 = head;
        while(temp1->next!=NULL){
            temp1 = temp1->next;
        }
        temp1->next=temp;
        return;
    }
}

void printNodes(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int n, x;
    head = NULL;
    cout<<"Enter no. of elements: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>x;
        insertNode(x);
    }
    
    printNodes();
    return 0;
}