#include <bits/stdc++.h>
using namespace std;

int atmost(vector<int> &nums,int k){
    if(k<0) return 0;
    int l=0;
    int oddcount=0,res=0;
    for(int r=0 ; r<nums.size();r++){
        if(nums[r]%2) oddcount++;
        while(oddcount>k){
            if(nums[l]%2) oddcount--;
            l++;
        }
        res +=r-l+1;
    }
    return res;
}

int NiceSubbarrays(vector<int> &nums, int k){
    return atmost(nums,k) - atmost(nums,k-1);
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int k;
    cout<<"Enter the number of odd numbers required in the subarray: ";
    cin>>k;

    int res = NiceSubbarrays(nums,k);
    cout<<"Number of nice subarrays: "<<res<<endl;

    return 0;
}
/*
In this program, we find the number of "nice" subarrays in the given array `nums` that contain exactly `k` odd numbers. The `atmost` 
function calculates the number of subarrays with at most `k` odd numbers using a sliding window approach. We maintain two pointers, 
`l` and `r`, to represent the current window of subarrays. We keep track of the count of odd numbers in the current window and count 
the number of valid subarrays. If the count of odd numbers exceeds `k`, we shrink the window from the left by moving the `l` pointer 
to the right and updating the count of odd numbers accordingly. The `NiceSubbarrays` function calculates the number of nice subarrays by subtracting the number of subarrays with at most `k-1` odd numbers from the number of subarrays with at most `k` odd numbers. In the main function, we read the input array and the value of `k` from the user, call the `NiceSubbarrays` function, and print the result.
We are using this method of subtracting atmost(k-1) from atmost(k) because it allows us to count only those subarrays that have 
exactly `k` odd numbers, while excluding those that have fewer than `k` odd numbers. This way, we can efficiently calculate the 
number of subarrays that meet the specific requirement of containing exactly `k` odd numbers without having to iterate through 
all possible subarrays, which would be less efficient.       
*/