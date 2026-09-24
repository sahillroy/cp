// Problem: Missing And Repeating
// Link: https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {

        vector<int> res;
        unordered_map<int, int> mpp;

        // Count frequency
        for (auto val : arr) {
            mpp[val]++;
        }

        // Find repeating and missing
        for (int i = 1; i <= arr.size(); i++) {
            if (mpp[i] == 2) {
                res.push_back(i);       // repeating
            }
        }

        for (int i = 1; i <= arr.size(); i++) {
            if (mpp[i] == 0) {
                res.push_back(i);       // missing
            }
        }

        return res;
    }
};