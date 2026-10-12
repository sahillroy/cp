// Problem: Maximum Packages within Time
// Link: https://www.geeksforgeeks.org/problems/bird-and-maximum-fruit-gathering0509/1

class Solution {
public:
    int maxPackages(vector<int>& arr, int totalTime) {
        int n = arr.size();

        // If allowed time covers or exceeds array size, sum all elements
        if (totalTime >= n) {
            int total = 0;
            for (int val : arr) total += val;
            return total;
        }

        int currentSum = 0;

        // 1. Build the first window of size totalTime
        for (int i = 0; i < totalTime; i++) {
            currentSum += arr[i];
        }

        int maxSum = currentSum;

        // 2. Slide the window across the array
        for (int i = totalTime; i < n; i++) {
            currentSum += arr[i] - arr[i - totalTime];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};