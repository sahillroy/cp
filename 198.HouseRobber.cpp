#include <bits/stdc++.h>
using namespace std;

int Robber(vector<int>& nums,int n) {
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

   for(int i=2 ; i<n; i++) {
        nums[i] = max(nums[i-1], nums[i-2] + nums[i]);
    }

    return nums[n-1];
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

    int res = Robber(nums,n);
    cout << "Maximum amount that can be robbed: " << res << endl;

    return 0;
}

/*
In this code, we define a function `Robber` that calculates the maximum amount of money that can be robbed from a list of houses, 
where each house has a certain amount of money. The function uses dynamic programming to iteratively calculate the maximum amount 
that can be robbed up to each house, while ensuring that no two adjacent houses are robbed. The main function prompts the user for 
the number of houses and the amount in each house, then calls the `Robber` function
In Robber function, we handle the base cases for 0, 1, and 2 houses. For more than 2 houses, we iterate through the list of houses
and update the amount in each house to be the maximum of either robbing the current house plus the amount from two houses back, or 
robbing the previous house. Finally, we return the maximum amount that can be robbed, which is stored in the last element of the 
`nums` vector. 
*/