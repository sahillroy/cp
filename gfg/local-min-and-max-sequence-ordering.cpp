// Problem: Local Min and Max Sequence Ordering
// Link: https://www.geeksforgeeks.org/problems/track-the-trail/1

class Solution {
  public:
    vector<int> extractPoints(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {};
        vector<int> res;

        // Remove consecutive duplicates (flatten)
        vector<int> flat;
        flat.push_back(arr[0]);
        for (int i = 1; i < n; ++i) {
            if (arr[i] != arr[i-1]) flat.push_back(arr[i]);
        }
        n = flat.size();
        if (n == 1) return {flat[0]};

        res.push_back(flat[0]);
        int prev_dir = 0; // 1: up, -1: down, 0: unknown

        for (int i = 1; i < n-1; ++i) {
            int d1 = flat[i] - flat[i-1];
            int d2 = flat[i+1] - flat[i];
            if ((d1 > 0 && d2 < 0) || (d1 < 0 && d2 > 0)) {
                res.push_back(flat[i]);
            }
        }
        if (flat.back() != res.back()) res.push_back(flat.back());
        return res;
    }
};