// Problem: Count Distinct in Array
// Link: https://www.geeksforgeeks.org/problems/find-distinct-elements--130928/1

class Solution {
  public:
    int countDistinct(vector<int>& arr) {
        // code here
        set<int> s(arr.begin(),arr.end());
        return s.size();
    }
};