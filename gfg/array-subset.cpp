// Problem: Array Subset
// Link: https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // code here
        unordered_map<int,int> mpp;
        for(auto val:a){
            mpp[val]++;
        }
        for(int i=0 ; i<b.size() ; i++){
            if(mpp[b[i]] <= 0){
                return false;
            }
            mpp[b[i]]--;
        }
    return true;
    }
};