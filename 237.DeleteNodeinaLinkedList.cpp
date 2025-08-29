#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
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

void Delete(Node*& head, int val) {

    // Case 1: head node contains the value
    if (head->data == val) {
        Node* toDelete = head;
        head = head->next;   // move head to next node
        delete toDelete;     // free memory
        return;
    }

    // Case 2: non-head node
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != val) {
        temp = temp->next;
    }

    // If found, delete it
    if (temp->next != nullptr) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;  // unlink node
        delete toDelete;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {4,5,1,9};
    Node* head = createListFromArray(arr);

    cout << "Original Linked List: ";
    printList(head);

    // Insert new element at start
    Delete(head,5);

    cout << "After inserting 100 at start: ";
    printList(head);

    return 0;
}
