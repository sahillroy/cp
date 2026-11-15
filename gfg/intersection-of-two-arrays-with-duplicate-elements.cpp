// Problem: Intersection of Two arrays with Duplicate Elements
// Link: https://www.geeksforgeeks.org/problems/intersection-of-two-arrays-with-duplicate-elements/1

class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        set<int>sr;
        unordered_map<int,int>mpp;
        for(auto val:a){
            mpp[val]++;
        }
        for(int i=0 ; i<b.size() ; i++){
            if(mpp.find(b[i]) != mpp.end()){
                sr.insert(b[i]);
            }
        }
        vector<int> res(sr.begin(),sr.end());
        return res;
    
    }
};