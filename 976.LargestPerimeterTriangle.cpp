#include <bits/stdc++.h>
using namespace std;

int largestperimenter(vector<int> arr , int &n){
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());

    for(int i=0 ; i<n -2 ; i++){
        if(arr[i] < arr[i+1] + arr[i+2]){
            return (arr[i] + arr[i+1] + arr[i+2]);
        }
    }
    return 0;
}

int main() {
    vector<int>arr;
    int n;

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n ;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int res = largestperimenter(arr,n);
    if(res == 0){
        cout<<"Triangle does not exist. "; 
    }
    else{
        cout<<"The largest perimeter of triangle is: "<<res<< endl;
    }
    return 0;
}
/*
here we are sorting array is descending order and then comparing triplets
since array is sorted and is in descending order sum of two sides should be greater than first element
which is greater and if its true we are returning perimeter of the triangle
*/