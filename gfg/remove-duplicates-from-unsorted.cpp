// Problem: Remove Duplicates from Unsorted
// Link: https://www.geeksforgeeks.org/problems/remove-duplicates-from-unsorted-array4141/1

class Solution {
public:
    vector<int> removeDuplicate(vector<int>& arr) {
        unordered_set<int> seen;
        vector<int> result;

        for (int num : arr) {
            // If the element hasn't been seen yet
            if (seen.find(num) == seen.end()) {
                seen.insert(num);
                result.push_back(num); // Keep original order
            }
        }

        return result;
    }
};