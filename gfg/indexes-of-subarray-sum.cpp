// Problem: Indexes of Subarray Sum
// Link: https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        int sum=0;
        int j=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            while(sum>target&&j<i){sum=sum-arr[j];j++;}
            if(sum==target){return {j+1,i+1};}
        }
        return {-1};
    }
};
