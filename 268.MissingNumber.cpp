#include<iostream>
#include<vector>
using namespace std;

int missingno(vector<int> arr,int n){
    int sum = (n*(n+1)/2);
    int sum1 = 0;
    for(int i =0;i<n;i++){
        sum1 = sum1+arr[i];
    }
    return sum-sum1;
}

int main(){
    vector<int> arr = {3,0,1};
    int n = arr.size();
    int result = missingno(arr,n);
    cout<<"The missing number is: "<< result<< endl;
    return 0;
}
