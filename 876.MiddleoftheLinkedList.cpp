#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* createListFromArray(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;

}

void Mid( Node* head){
    Node* fast = head; 
    Node* slow = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;//for one slow fast will move 2 nodes so when fast reaches last slow will be at middle
    }

    cout<<"The middle node is: " << slow->data << endl;
}

int main() {
    vector<int> arr = {4,5,1,9,7};

    Node* head = createListFromArray(arr);
    
    Mid(head);

    return 0;
}
//  Tortoise and Hare Algorithm is used in which 2 pointers are taken 1 moves through single node (slow) while other moves 2 nodes at a
// time(fast). So when the fast reaches at end the slow will point at middle node 