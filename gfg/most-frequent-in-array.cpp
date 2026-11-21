// Problem: Most Frequent in Array
// Link: https://www.geeksforgeeks.org/problems/most-frequent-element-in-an-array/1

class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        unordered_map<int, int> mpp;
        int maxFreq = 0;
        int res = INT_MIN;

        for (int val : arr) {
            int count = ++mpp[val];
            if (count > maxFreq || (count == maxFreq && val > res)) {
                maxFreq = count;
                res = val;
            }
        }
        return res;
    }
};