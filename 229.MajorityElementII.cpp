#include <bits/stdc++.h>
using namespace std;

vector<int> majorelement(vector<int> arr , int n){
    vector<int> result;
    int num = n/3;
    unordered_map<int,int> mpp;

    for(auto i:arr){// another method for initiating loop especially for hashing
        mpp[i]++;
    }
    for(auto a:mpp){
        int freq = a.second;// hasing has key,value pair here second refers to value which is stored in freq(i.e frequency of num)
        if(freq>num){  //condition in Q
            result.push_back(a.first);// here a.first refers to key(i.e number) that number will be psuher in result with max freq
        } 
    }
    return result;
}

int main(){
    int n;
    vector<int> arr;

    cout<<"Enter the numer of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int> result = majorelement(arr,n);

    cout<<"The Majority element is: ";
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }
    return 0;
    
    
}