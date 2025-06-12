#include<iostream>
#include<vector>
using namespace std;

int stock(vector<int>arr,int n){
    int buy= arr[0]; // preassuming buying stock at first day an comparing if we found less amount we'll replace it 
    int maxprofit =0;
    for(int i=1;i<n;i++){
        if(buy>arr[i]){
            buy = arr[i];
        }
        maxprofit = max(maxprofit,arr[i]-buy);
    }
    return maxprofit;
}

int main(){
    vector<int> arr;
    int n;

    cout<<"Enter the number of days: ";
    cin>>n;

    cout<<"Enter the stock prices on each day: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x); 
    }

    int result = stock(arr,n);

    cout<<"The maximum profit you can achieve from this transactiony is: " << result <<endl;
    return 0;
}