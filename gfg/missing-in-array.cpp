// Problem: Missing in Array
// Link: https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1

class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};