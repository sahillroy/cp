#include <bits/stdc++.h>
using namespace std;

int luckyInt(vector<int>arr,int &n){
    unordered_map<int,int> mpp;
    int res = -1;//if no lucky int exist it returns -1 (conditon of Q)

    for(auto val: arr){//for calculating freq of elements 
        mpp[val]++;
    }

    for(int i=0 ; i<n ; i++){
        if(arr[i] == mpp[arr[i]]){
            res = max(res,arr[i]);//here max condition is for some cases when there are more than 1 lucky int so it returns max one
        }
    }

    return res;
}

int main(){
    vector<int> arr;
    int n;

    cout<<"Enter the length of the array: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int result = luckyInt(arr,n);

    cout<<"The lucky number in the array is:  "<< result << endl;
    return 0;
}

//a lucky integer is an integer that has a frequency in the array equal to its value.
//max function is used in res for these types of Q
//[5,4,7,8,4,8,8,3,7,7,6,3,7,6,5,6,8,4,5,7,4,7,7,5,2,5,6,6,8,1,6,8,8,8,9,3,2,9] here there are many lucky integers
// like 2,3,4,5,6,7,8 and max is 8 so it should return 8 without max it was returning 2

// (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }this loop can also be used for taking input in vector array