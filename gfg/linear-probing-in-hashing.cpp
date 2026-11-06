// Problem: Linear Probing in Hashing
// Link: https://www.geeksforgeeks.org/problems/linear-probing-in-hashing-1587115620/1

class Solution {
  public:
    vector<int> linearProbing(vector<int>& arr, int m) {
        vector<int> hash_table(m, -1);
        
        for (int val : arr) {
            int idx = val % m;
            int start_idx = idx;
            
            // Probe sequentially until we find an empty slot (-1) or the value itself
            while (hash_table[idx] != -1 && hash_table[idx] != val) {
                idx = (idx + 1) % m;
                
                // Stop if we wrapped around to where we started (table is full)
                if (idx == start_idx) {
                    break;
                }
            }
            
            // Insert into the empty slot
            if (hash_table[idx] == -1) {
                hash_table[idx] = val;
            }
        }
        
        return hash_table;
    }
};