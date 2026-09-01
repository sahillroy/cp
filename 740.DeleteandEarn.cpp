#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    if (nums.empty()) return 0;

        int maxVal = 0;
        for (int num : nums) {
            maxVal = max(maxVal, num);
        }
        vector<int> sum(maxVal + 1, 0);
        for (int num : nums) {
            sum[num] += num;
        }

      
        vector<int> dp(maxVal + 1, 0);
        dp[0] = sum[0];
        dp[1] = max(sum[0], sum[1]);

        for (int i = 2; i <= maxVal; i++) {
            int pick = sum[i] + dp[i - 2];
            int npick = dp[i - 1];
            dp[i] = max(pick, npick);
        }
        cout<<dp[maxVal]<<endl;
    return 0;
}
 /*
 The approach is to use dynamic programming.
 We are creating a maxsize vector to store the sum of each number.
 Similar to house robber problem, we have two choices at each step:
 1. Pick the current number and add it to the sum.
 2. Don't pick the current number and add the previous sum to the sum.
 We take the maximum of these two choices.
 */
