// Problem: Top K Frequent Elements
// Link: https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for (auto val : nums) {
            mpp[val]++;
        }

        // Min-heap storing pair<frequency, element>
        using Pair = pair<int, int>;
        priority_queue<Pair, vector<Pair>, greater<Pair>> min_heap;

        for (auto& [val, freq] : mpp) {
            min_heap.push({freq, val});
            // Keep the heap size equal to k
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        // Extract the k elements from the heap
        vector<int> res;
        while (!min_heap.empty()) {
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }

        return res;
    }
};