// Problem: Running Sum of 1d Array
// Link: https://leetcode.com/problems/running-sum-of-1d-array/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int tsum =0;
        for(int i=0 ; i<nums.size() ; i++){
            tsum+=nums[i];
            nums[i] = tsum;
        }
        return nums;
    }
};