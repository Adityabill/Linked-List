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
    temp->data=x;
    temp->next=head;
    head=temp;
}

void printNodes(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}

void reverseNodes(){
    Node* current;
    Node* previous;
    Node* next;
    current = head;
    previous = NULL;
    while(current!=NULL){
        next = current->next;
        current->next=previous;
        previous = current;
        current = next;
    }
    head = previous;
    return;
}

int main(){
    int n, x;
    head = NULL;
    cout<<"Enter no. of elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<":";
        cin>>x;
        insertNode(x);  
    }
    cout<<"Elements in the linked list are: ";
    printNodes();
    cout<<"\n";
    reverseNodes();
    cout<<"Reversed linked list are: ";
    printNodes();
    return 0;
}