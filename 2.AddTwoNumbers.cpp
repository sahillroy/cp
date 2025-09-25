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

Node* addtwo(Node* head1 , Node* head2){
    Node* dummy = new Node(0);
    Node* curr = dummy;
    int carry=0;

    while( head1 != NULL || head2 != NULL || carry>0){
        int sum = carry;

        if(head1 != NULL){
            sum += head1->data;
            head1 = head1->next;
        }

        if(head2 != NULL){
            sum += head2->data;
            head2 = head2->next;
        }

        carry =  sum/10;
        int digit= sum%10;

        curr->next = new Node(digit);
        curr = curr->next;
    }
    return dummy->next;

}

int main() {
    vector<int> arr1,arr2;
    int n1,n2;

    cout<<"Enter the Number of Elements of 1st LL: ";
    cin>>n1;

    cout<<"Enter the Elements in 1st LL: ";
    for(int i=0 ; i<n1 ; i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }

    Node* head1 = CreateLL(arr1,n1);

    printll(head1);

     cout<<"Enter the Number of Elements of 2nd LL: ";
    cin>>n2;

    cout<<"Enter the Elements in 2nd LL: ";
    for(int i=0 ; i<n2 ; i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }

    Node* head2 = CreateLL(arr2,n2);

    printll(head2);

    Node* head3 = addtwo(head1,head2);

    cout<<"The New Linked List after adding is: " << endl;

    printll(head3);

    return 0;
}

/*
we are making a dummy node which will contain the answer and starting with 0 as it can't be empty at start
and assigning a curr pointer which will traverse through dummy and a carry function which contain carry from 
prev sum

we are running a while loop until first or second ll is empty or carry is present 
Inside we are adding carry and first LL data  and second LL data in sum 
we are dividing sum by 10 and storing the remainder in dummy through carry and the tens place element in
the carry which will go in next addition
Finally we return the dummy->next as first is 0 
*/