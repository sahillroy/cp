// Problem: Nth Geeky Number
// Link: https://www.geeksforgeeks.org/problems/is-it-fibonacci--170647/1

class Solution {
  public:
    int nthGeekyNumber(int n, vector<int> &geekNum) {
        // code here
        int k =geekNum.size();
        if(n<=k){
            return geekNum[n-1];
        }
        int cursum =0;
        for(int i=0 ; i<k ; i++){
            cursum += geekNum[i];
        }
        
        vector<int>res(n,0);
        for(int i=0 ; i<k ; i++){
            res[i] = geekNum[i];
        }
        for(int i = k ; i<n ; i++){
            res[i] = cursum;
            cursum = cursum + res[i] - res[i-k];
        }
        return res[n-1];
    }
};