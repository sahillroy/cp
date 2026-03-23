#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxl=0,zero=0;

        while(r<nums.size()){
            if(nums[r] == 0){
                zero++;
            }
            if(zero>k){
                if(nums[l] == 0){
                    zero--;
                }
                l++;
            }
            if(zero<=k){
                int len = r-l+1;
                maxl = max(maxl,len);
            }
            r++;
        }
        return maxl;
    }

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    int result = longestOnes(nums, k);
    cout << "The longest subarray of 1s after flipping at most " << k << " 0s is: " << result << endl;
    return 0;
}

/*
This program finds the length of the longest subarray of 1s after flipping at most k 0s.
In the `longestOnes` function, we use a sliding window approach with two pointers (l and r) to keep track of the current 
subarray. We also maintain a count of zeros in the current window. If the count of zeros exceeds k, we move the left 
pointer (l) to the right until the count of zeros is less than or equal to k. We calculate the length of the current valid
 subarray and update the maximum length found so far. Finally, we return the maximum length of the subarray of 1s that can
 be achieved by flipping at most k 0s.
In the main function, we read the size of the array, the elements of the array, and the value of k from the user. 
We then call the `longestOnes` function and print the result.
*/