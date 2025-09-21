#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* CreateLL(vector<int> arr , int &n){
    Node* head = new Node(arr[0]);
    Node*temp = head;

    for(int i=1 ; i<n ; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printll(Node* head){
    Node* temp = head;
    
    while(temp){
        cout<< temp->data;
        if(temp->next) cout << "-> ";
        temp = temp->next;
    }
    cout<< endl;
}

Node* delmiddle(Node* head){

    Node* slow = head;
    Node* fast = head;
    Node* prev; // for storing previous node os middle element 

    if(head == nullptr || head->next == nullptr){ // special case
        return nullptr;
    }

    while(fast && fast->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;
    delete slow;

    return head;
}

int main() {
    vector<int> arr;
    int n;

    cout<<"Enter the Number of Elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    Node* head = CreateLL(arr,n);

    printll(head);

    delmiddle(head);

    cout<<"The New Linked List after deleting middle node is: " << endl;

    printll(head);

    return 0;
}
/*
We are finding middle element using fast and slow pointers and during each iteration of while loop we are storing the slow node in previous
and then incrementing it so when the slow will be at middle, the previous will point at previous element and since we have to delete the middle 
node(slow) we need its previous node so that we can change its next to next of slow and then delete the slow node and return the linked list
*/