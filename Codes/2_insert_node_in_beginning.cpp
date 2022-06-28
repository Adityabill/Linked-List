#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* head;

void insert_node(int x){
    Node* temp = new Node;
    temp->data=x;
    temp->next=head;
    head=temp;
}

void print_nodes(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main() {
    // Write C++ code here
    head=NULL;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int x;
    for(int i=0; i<n; i++){
        cin>>x;
        insert_node(x);
        print_nodes();
    }
    

    return 0;
}