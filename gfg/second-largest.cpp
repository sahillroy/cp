// Problem: Second Largest
// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=-1;
        int secm =-1;
        for(int i=0 ; i<arr.size() ; i++){
            if (arr[i]>max) max = arr[i];
        }
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i]>secm){
                if(arr[i]<max){
                    secm = arr[i];
                }
            }
        }
        return secm;
    }
};