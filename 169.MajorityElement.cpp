#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxelement(vector<int> arr,int n){
    int count=0;
    int result;
    unordered_map<int,int>mpp;
    for(auto val : arr){
        mpp[val]++;
    }
    for(auto val : mpp){
        if(val.second>count){
            count=val.second;
            if(val.second>n/2){
                result=val.first;
            }
        }
    }
    return result;
}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the numer of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int result = maxelement(arr,n);
    cout<<"The Majority element is: "<< result <<endl;
    return 0;
}
//this code is not fully optimized as i've not wriiten a code if If no element appears more than n/2 times