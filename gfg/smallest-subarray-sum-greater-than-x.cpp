// Problem: Smallest Subarray Sum Greater Than x
// Link: https://www.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1

class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        int l=0 ;
        int sum =0;
        int len = INT_MAX;
        
        for(int r=0 ; r<arr.size() ; r++){
            sum +=arr[r];
            while(sum>x){
                len = min(len,r-l+1);
                sum -= arr[l];
                l++;
            }
        }
        return len == INT_MAX ? 0: len ;
    }
};