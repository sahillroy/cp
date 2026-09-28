// Problem: Rotate Array
// Link: https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
         d = d%n;
        vector<int> rotated(n);
        for(int i=0 ; i<n ; i++){
            rotated[(i-d +n)%n] = arr[i];
        }
        for(int i=0 ; i<n ; i++){
                    arr[i] = rotated[i];
                }
    }
};