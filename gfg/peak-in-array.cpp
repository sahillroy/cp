// Problem: Peak in Array
// Link: https://www.geeksforgeeks.org/problems/peak-element/1

class Solution {
public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        int low = 0, high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Check if mid is greater than its left neighbor (or if left neighbor doesn't exist)
            bool leftOk = (mid == 0 || arr[mid] > arr[mid - 1]);
            
            // Check if mid is greater than its right neighbor (or if right neighbor doesn't exist)
            bool rightOk = (mid == n - 1 || arr[mid] > arr[mid + 1]);
            
            if (leftOk && rightOk) {
                return mid; // Found a peak index
            }
            
            // If the right neighbor is greater, a peak must exist on the right half
            if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            } else { // Otherwise, a peak exists on the left half
                high = mid - 1;
            }
        }
        
        return -1;
    }
};