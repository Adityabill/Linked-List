#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main()
{
    //defining the pointers of the nodes
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    
    //defining the nodes
    first = new Node();
    second = new Node();
    third = new Node();
    
    //first node
    first->data = 1;
    first->next = second;
    
    //second node
    second->data = 2;
    second->next = third;
    
    
    //third node
    third->data = 3;
    third->next = NULL;
    
    Node* temp = first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}
