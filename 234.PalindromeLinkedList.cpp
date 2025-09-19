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
    Node* temp = head;

    for(int i=1 ; i<n ; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printll(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}

bool palindrome(Node* head){
    Node* temp = head;
    stack<int> st; // we are using stack for checking palindrome

    while(temp != nullptr){
        st.push(temp->data); // pushing each element of LL in stack
        temp = temp->next;
    }

    temp = head; //reinitializing temp to head for comparision 

    while(temp != nullptr){
        if(st.top() != temp->data){
            return false;
        }
        st.pop(); // for comparing next element
        temp = temp->next;
    }
    return true;
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

    bool flag = palindrome(head);

    if(flag){
        cout<<"The given Linked List is palindrome. " << endl;
    }
    else{
        cout<<"The given Linked List is not a palindrome. " << endl; 
    }
    
    return 0;
}
/*
for finding palindrome we are using stack for LInked list
Firstly we are pushing every node element inside at stack and reinitializing the temp pointer again back to head for comparision
As stack work on principle of LIFO so the LL last element will be at top of stack
We are comparing temp with the top of element of stack if it is same, condition of palindroome is satisfies and we move to next element by
incrermenting pointer and poping stack and if its different we are returning false
*/