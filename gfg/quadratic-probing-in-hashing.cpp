// Problem: Quadratic Probing in Hashing
// Link: https://www.geeksforgeeks.org/problems/quadratic-probing-in-hashing-1587115621/1

class Solution {
  public:
    vector<int> quadraticProbing(vector<int>& arr, int m) {
        // code here
        vector<int>res(m,-1);
        for(int i=0 ; i<arr.size() ; i++){
            int idx = arr[i] % m;
            int n=0;
            bool exist = false;
            
            while(n<m){
                int pos = (idx + n*n) %m;
                
                if(res[pos] == arr[i]){
                    exist = true;
                    break;
                }
                if(res[pos] == -1){
                    res[pos] = arr[i];
                    break;
                }
                n++;
            }
    }
    return res;
    }
};