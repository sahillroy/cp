// Problem: Check Arithmetic Progression
// Link: https://www.geeksforgeeks.org/problems/check-arithmetic-progression1842/1

class Solution {
  public:
    bool checkIsAP(vector<int> &arr) {
        int n = arr.size();
        if (n <= 2) return true;

        // Sort the array to bring elements into sequential order
        sort(arr.begin(), arr.end());

        // Find the common difference
        int diff = arr[1] - arr[0];

        // Verify if all consecutive elements maintain the same difference
        for (int i = 2; i < n; i++) {
            if (arr[i] - arr[i - 1] != diff) {
                return false;
            }
        }

        return true;
    }
};