#include<bits/stdc++.h>
using namespace std;

vector<int> mergesortedarray(vector<int>arr1,vector<int>arr2,int &m,int &n){
    int i = 0;
    int j = 0;
    vector<int> res;

    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            res.push_back(arr1[i]);
            i++;
        }
        else{
            res.push_back(arr2[j]);
            j++;
        }
    }
    while(i<m){
        res.push_back(arr1[i]);
        i++;//this while is for a codition in which m is greater and for filling remaining positions
    }
    while(j<n){
        res.push_back(arr2[j]);
        j++;//this while is for a codition in which m is greater and for filling remaining positions
    }
    return res;
}

int main(){
    vector<int> arr1,arr2;
    int n1,n2,m,n;

    cout<<"Enter the size of first array: ";
    cin>>n1;
    cout<<"Enter the elements in non-descending order: ";
    for(int i =0 ; i<n1 ; i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    cout<<"Enter the number of Elements that should be merged from 1st array: ";
    cin>>m;

    cout<<"Enter the size of second array: ";
    cin>>n2;
    cout<<"Enter the elements in non-descending order: ";
    for(int i =0 ; i<n2 ; i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    cout<<"Enter the number of Elements that should be merged from 2nd array: ";
    cin>>n;
    
    vector<int> result = mergesortedarray(arr1,arr2,m,n);

    cout<<"The merged sorted array is: ";
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
// here firstly sorted array is given so we are taking a while loop in which we are comparing all elements of first array with
// elements of second array and pushing back the lower element in the result array and incrementing only the pointer of that
// array so that other can be recompared. The other while loops are used if the m or n is large so the remaining elements can be
// directly inserted if one of the two array is ended. In the LC Q return type is void so we are copying the res array in arr1.
// This is not optimal solution the optimal solution consists of three pointer system   