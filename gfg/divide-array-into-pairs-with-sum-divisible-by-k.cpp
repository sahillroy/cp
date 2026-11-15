// Problem: Divide Array into Pairs with Sum Divisible by K
// Link: https://www.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution {
  public:
    bool canPairs(vector<int> &arr, int k) {
        // Code here.
        if(arr.size()%2 != 0){
            return false;
        }
        vector<int>freq(k,0);
        for(int num: arr){
            freq[num%k]++;
        }
        if(freq[0]%2 !=0){
            return false;
        }
        for(int r=1;r<=k/2;r++){
            if(r == k-r){
                if(freq[r]%2 != 0){
                    return false;
                }
            }else{
                if(freq[r] !=freq[k-r]){
                    return false;
                }
            } 
        }
        return true;
    }
};