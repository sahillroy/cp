#include <bits/stdc++.h>
using namespace std;

vector<string> ArrwithStack(vector<int> &arr,int target){
    vector<string> operation;
    int j=0;

    for(int i=1 ; i<= target ; i++){
        operation.push_back("Push");

        if(arr[j] == i){
            j++;
            if(j == arr.size()){
                break;
            }
        }
        else{
            operation.push_back("Pop");
        }
    }
    return operation;
}

int main() {
    int n,target;
    vector<int> arr;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the target Elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter the Stream of integer's range: ";
    cin>>target;

    vector<string> res = ArrwithStack(arr,target);

    cout<<"The operations are as follows: ";
    for(int i=0 ; i<res.size() ; i++){
        cout<<res[i]<<" ";
    }
    return 0;
}

/*
We are given an array and we want to mske the same structure in stack by pushing or popping it
we are also given an target value representing range (1 to target) which we can insert in stack

We are assigning a pointer j which points element in array
First we are running a loop from 1 to target and pushing the number
if it is present in array we are incrementing j to next index of array 
If not we are popping the number 
The stopping condition is met when j has traversed till end of the array

we are maintaining an string array and storing operation that are performed to reach final goal
*/