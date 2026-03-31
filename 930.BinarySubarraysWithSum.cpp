#include <bits/stdc++.h>
using namespace std;

int atmost(vector<int> &nums,int goal){
    if(goal<0) return 0;
    int l=0;
    int count = 0;
    int sum = 0;
    for(int r=0 ; r<nums.size();r++){
        sum+=nums[r];
        while(sum>goal){
            sum-=nums[l];
            l++;
        }
        count+=r-l+1;
    }
    return count;
}

int maxSubarraywithSum(vector<int> &nums,int goal){
    return atmost(nums,goal) - atmost(nums,goal-1);
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

    int goal;
    cout<<"Enter the target sum: ";
    cin>>goal;

    int res = maxSubarraywithSum(nums,goal);
    cout<<"Number of subarrays with sum equal to target: "<<res<<endl;

    return 0;
}

/*
In this program, we find the number of subarrays in the given array `nums` that have a sum equal to a specified target `goal`.
The `atmost` function calculates the number of subarrays with a sum less than or equal to the given `goal` using a sliding window 
approach. We maintain two pointers, `l` and `r`, to represent the current window of subarrays. We keep track of the sum of the 
current window and count the number of valid subarrays. If the sum exceeds the `goal`, we shrink the window from the left by moving 
the `l` pointer to the right and updating the sum accordingly. The `maxSubarraywithSum` function calculates the number of subarrays 
with a sum equal to the `goal` by subtracting the number of subarrays with a sum less than or equal to `goal-1` from the number of 
subarrays with a sum less than or equal to `goal`. In the main function, we read the input array and the target sum from the user,
 call the `maxSubarraywithSum` function, and print the result.
We are using this method of subtracting atmost(goal-1) from atmost(goal) because it allows us to count only those subarrays that 
have a sum exactly equal to the target, while excluding those that have a sum less than the target. This way, we can efficiently 
calculate the number of subarrays that meet the specific sum requirement without having to iterate through all possible subarrays, 
which would be less efficient.
*/