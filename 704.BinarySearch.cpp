#include <bits/stdc++.h>
using namespace std;

int bsearch(vector<int> arr , int &n, int &target){
    int result = -1;// if element is not possible

    for(int i=0 ; i<n ; i++){
        if(arr[i] == target){
            result = i;
        }
    }
    return result;
}

int main(){
    int n,target;
    vector<int> arr;

    cout<<"Enter the numer of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter the target element: ";
    cin>>target;

    int result = bsearch(arr,n,target);

    if(result == -1){
        cout<<"The Element is not present in the array ";
    }
    else{
        cout<<"The element is present at position: "<< result << endl;
    }
    return 0;
}