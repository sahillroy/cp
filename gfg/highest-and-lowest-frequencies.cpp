// Problem: Highest and Lowest Frequencies
// Link: https://www.geeksforgeeks.org/problems/difference-between-highest-and-lowest-occurrence4613/1

class Solution {
  public:
    int findDiff(vector<int>& arr) {
        // code here
        unordered_map<int,int> mpp;
        
        for (auto val : arr) {
                    mpp[val]++;
                }

                int max_freq = 0;
                int min_freq = INT_MAX;

                for (auto val : mpp) {
                    max_freq = max(max_freq, val.second);
                    min_freq = min(min_freq, val.second);
                }

                return max_freq - min_freq;
    }
};