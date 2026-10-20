// Problem: Zero Sum Subarray
// Link: https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        // code here
        unordered_set<int> mpp;
         int cursum =0;
         for(int num:arr){
             cursum += num;
             
             if(cursum == 0 || mpp.find(cursum) != mpp.end()){
                 return true;
             }
             
            mpp.insert(cursum);
         }
        return false;
    }
};