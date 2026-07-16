#include <bits/stdc++.h>
using namespace std;

bool Partition(vector<int>& arr, int n) {
     int totalSum = 0;
        for (int num : arr) totalSum += num;

        if (totalSum % 2 != 0) return false;

        int targetSum = totalSum / 2;
        vector<bool> dp(targetSum + 1, false);
        dp[0] = true;
        for (int num : arr) {
            for (int currSum = targetSum; currSum >= num; --currSum) {
                dp[currSum] = dp[currSum] || dp[currSum - num];
                if (dp[targetSum]) return true;
            }
        }
        return dp[targetSum];
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    bool res = Partition(arr,n);
    
    cout<<"Can the array be partitioned into two subsets with equal sum? " << (res ? "Yes" : "No") << endl;
    return 0;
}

/*
Here in partition function we are checking if the given array can be partitioned into two subsets with equal sum or not. We first 
calculate the total sum of the array and check if it is odd or even. If it is odd, we return false as it cannot be partitioned into
two equal subsets. If it is even, we use dynamic programming to check if there exists a subset with sum equal to half of the total
sum. We use a 1D dp array to keep track of possible sums that can be formed using the elements of the array. The time complexity 
of this solution is O(n*targetSum) and space complexity is O(targetSum), where n is the number of elements in the array and 
targetSum is half of the total sum.

In this we used Knapsack technique to solve the problem. The idea is to find a subset of the given array whose sum is equal to half 
of the total sum of the array. If such a subset exists, then the remaining elements will also form a subset with equal sum. We use
a dynamic programming approach to build a dp array that keeps track of possible sums that can be formed using the elements of the 
array. We iterate through each element and update the dp array accordingly. If we can form a sum equal to half of the total sum, 
we return true, otherwise false.
*/