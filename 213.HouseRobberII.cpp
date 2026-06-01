#include <bits/stdc++.h>
using namespace std;

int robLinear(vector<int>& nums, int start, int end) {
        int prev2 = 0; // Represents dp[i-2]
        int prev1 = 0; // Represents dp[i-1]
        
        for (int i = start; i <= end; i++) {
            int current = max(prev1, nums[i] + prev2);
            prev2 = prev1;
            prev1 = current;
        }
        
        return prev1;
    }

int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        
        // Max money skipping the last house vs skipping the first house
        int opt1 = robLinear(nums, 0, n - 2);
        int opt2 = robLinear(nums, 1, n - 1);
        
        return max(opt1, opt2);
    }

int main() {
    int n;
    cout << "Enter the number of houses: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the amount in each house: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int res = rob(nums);
    cout << "Maximum amount that can be robbed: " << res << endl;
    return 0;
}

/*
In this code, we define a function `rob` that calculates the maximum amount of money that can be robbed from a circular list of houses,
where each house has a certain amount of money. The function uses a helper function `robLinear` to calculate the maximum amount that 
can be robbed from a linear list of houses. The `rob` function handles the base cases for 1 and 2 houses. For more than 2 houses, it 
calculates the maximum amount by considering two scenarios: robbing from the first house to the second-to-last house, and robbing from 
the second house to the last house. Finally, it returns the maximum of the two scenarios. The main function prompts the user for the 
number of houses and the amount in each house, then calls the `rob` function to get the result.
We used DP in the `robLinear` function to iteratively calculate the maximum amount that can be robbed up to each house, while ensuring 
that no two adjacent houses are robbed. The `prev2` and `prev1` variables are used to store the results of the previous two calculations, 
allowing us to compute the current maximum without needing an additional array for DP. 
*/