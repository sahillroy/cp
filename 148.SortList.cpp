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

Node* merge(Node* left , Node* right){
    if(left == nullptr){
        return right;
    }
    else if(right == nullptr){
        return left;
    }

    if(left->data < right->data){
        left->next = merge(left->next,right);
        return left;
    }
    else{
        right->next = merge(left,right->next);
        return right;
    }
}

Node* splitmid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = slow;

        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = NULL;
        return slow;
}

Node* mergesort(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* righthead = splitmid(head);
    Node* left = mergesort(head);
    Node* right = mergesort(righthead);
    return merge(left,right);
}

Node* SortList(Node* head){
    Node* ans = mergesort(head);
    return ans;
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

    head = SortList(head);

    cout<<"The new Sorted Linked List is: " << endl;

    printll(head);

    return 0;
}
/*
The code implements merge sort on a linked list. It works by first finding the middle of the list using the slow and fast pointer approach,
then splitting the list into two halves. Each half is recursively sorted until the base case is reached, where a list with zero or one node 
is already sorted. Once both halves are sorted, they are merged together using the merge function, which compares nodes from each half and 
links them in increasing order. This process ensures that after all recursive calls finish, the linked list is fully sorted in ascending 
order
*/