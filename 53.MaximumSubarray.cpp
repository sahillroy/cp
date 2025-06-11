#include<iostream>
#include<vector>
using namespace std;

int maxsubarray(vector<int> arr,int n){
   int maxsum =0;
   int currsum=0;
for(int i =0;i<n;i++){
    currsum += arr[i];

    if(currsum>maxsum){
        maxsum = currsum;
    }

    if(currsum<0){
        currsum=0;
    }
}
   return maxsum;
}

int main(){
    vector<int>arr;
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;

    cout<<"Enter the values in array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int result = maxsubarray(arr,n);

    cout<<"The Maximum sum of the subarray is: "<< result << endl;
    return 0;
}