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
        cout<< temp->data << "-> ";
        temp = temp->next;
    }
    cout<< endl;
}

Node* OddEvenll(Node* head){

    if(!head || !head->next){ // if LL has no or 1 element return directly
        return head;
    }
    Node* odd = head;
    Node* even = head->next;
    Node* evenhead = even; // for connecting even and odd LL at end after segregation

    while(even && even->next){
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenhead;
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

    head = OddEvenll(head);

    cout<<"The Segregated Odd Even indexed Linked List is: " << endl;

    printll(head);

    return 0;
}
/*
We have to segregate the linked list on the basis of even and odd index (first all odd index and then even)
We are initializing two pointers for even and odd and an pointer for evenhead so that we can connect at end of odd LL at the end
odd start from head while even start from 2nd node
we are using even in while loop as it is starting from 2 and will be check potential all node even if odd number s of Node are there in LL

Firstly we are adding next Node of even in odd (as after even, odd index will be there) and moving odd pointer to the next node(currently 
added node) for next loop
Same we are doing it for Even pointer until all Nodes are visited

At the end we are adding the even head at end of odd pointer LL to connect them and then returning the head

*/