#include <bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }

};

Node* createlinkedlist(vector<int> arr){

    if(arr.empty()){
        return nullptr;
    }

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i=1 ; i<arr.size() ; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printLinkedlist(Node* head){
    Node* temp = head;
    
    while(temp != nullptr){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}

Node* reverselinkedlist(Node* head){
    Node* prev = nullptr; // initially prev is assigned to null
    Node* temp = head; // direction of this node will be reversed each time

    while(temp != nullptr){
        Node* front = temp->next ; // temp node for front node

        temp->next = prev; // reversing pointer of the node
        prev = temp; // updating prev to forward node for next iteration
        temp = front; // updating temp to forward node for next iteration
    }
    return prev; // after reversing the head will be pointed by prev
}


int main() {
    vector<int> arr = {1,2,3,4,5};
    Node* head = createlinkedlist(arr);

    cout<<" Original Linked List: ";
    printLinkedlist(head);

    head = reverselinkedlist(head);

    cout<<"Reversed Linked List: ";
    printLinkedlist(head);

    return 0;
}

/*
For reversing the linked list we are using 3 pointers prev, current(temp) and front.
Initially the prev pointer points to NULL and temp points to first Node then we are initializing a temporary next node inside loop which
is pointing to the succeeding node
Firstly we are reversing the temp node by pointing its next to prev (which is null for 1st iteration) 
and then moving prev node to temp node(succeding node) for next iteration and also moving temp to succeeding node

for 2nd iteration prev will point first node the temp will point second and front will third & it will move likewise
at end the pev will point to the head node that's why we are returning it
*/