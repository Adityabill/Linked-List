#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

Node* head;


//nodes inserted in beginning
void insertNode(int inputNode){
    Node* temp = new Node();
    temp->data = inputNode;
    temp->next = head;
    head=temp;
}


//printing all elements of the linked list
void printNodes(){
    Node* temp=head;
    cout<<"The elements of the node are: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}


//function to delete node
void deleteNode(int n){
    Node* temp1 = head;
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }

    int i=0;
    for(i=0; i<n-2; i++){
        temp1=temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next=temp2->next;
    free(temp2);

}


int main(){
    int n;
    head=NULL;
    int num_nodes, x;
    cout<<"Enter no. of nodes: ";
    cin>>num_nodes;
    for(int i=0; i<num_nodes; i++){
        cout<<"Enter element no "<<i<<" ";
        cin>>x;
        insertNode(x);
        printNodes();
    }
    cout<<"Linked List is:";
    printNodes();

    cout<<"Enter the position of the node to be deleted: ";
    cin>>n;
    deleteNode(n);
    printNodes();
    return 0;
}