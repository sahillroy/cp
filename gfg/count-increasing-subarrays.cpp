// Problem: Count Increasing Subarrays
// Link: https://www.geeksforgeeks.org/problems/count-increasing-subarrays5301/1

class Solution {
public:
    int countIncreasing(vector<int>& arr) {
        int n = arr.size();
        int totalCount = 0;
        int len = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                len++;
            } else {
                // Add combinations for the completed increasing segment
                totalCount += (len * (len - 1)) / 2;
                len = 1; // reset length for new segment
            }
        }

        // Add combinations for the last segment
        totalCount += (len * (len - 1)) / 2;

        return totalCount;
    }
};