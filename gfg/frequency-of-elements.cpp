// Problem: Frequency of Elements
// Link: https://www.geeksforgeeks.org/problems/frequency-of-elements--111353/1

class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        vector<vector<int>> res;
        unordered_map<int,int> mpp;
        for(auto val:arr){
            mpp[val]++;
        }
        for(auto val:mpp){
            res.push_back({val.first, val.second});
        }
    return res;
    }
};