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

Node* DelfromEnd(Node* head,int &a){

    int total = 0;
    Node* temp = head;
    
    while(temp){
        temp = temp->next;
        total++;
    }

    int target = total - a;

    if(target == 0){
        Node* oldhead = head;
        head = head->next;
        delete oldhead;
    }

    Node* prev = head;
    for(int i=0 ; i< target-1; i++){
        prev = prev->next;
    }

    Node* curr = prev->next;
    prev->next = curr->next;
    delete curr;

    return head;
}

int main() {
    vector<int> arr;
    int a,n;

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

    cout<<"Enter the index of node from the end which should be deleted: ";
    cin>>a;
    head = DelfromEnd(head,a);

    cout<<"The New Linked List after deleted node is: " << endl;

    printll(head);

    return 0;
}
/*
We have to remove the nth node from end of the LL firstly we are calculating total number of nodes in LL
then we are subtracting it with target to get the index from front 

We are using an if condition for special case if target ==0 i.e first element should be deleted

otherwise we are iterating an for loop from 0 ti target-1 as we have to link its prev node to next node and delete
the middle element
*/