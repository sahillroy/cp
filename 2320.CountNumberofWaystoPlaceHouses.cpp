#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of houses: ";
    cin >> n;

    const long long MOD = 1000000007;
    vector<int> dp(n + 1);

    dp[0] = 1; // Base case: 1 way to place 0 houses
    dp[1] = 2; // Base case: 2 ways to place

    for (int i = 2; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD; // Recurrence relation
    }
    long long result = (1LL*dp[n] * dp[n]) % MOD; // Square the result for both sides of the street
    cout << "Number of ways to place houses: " << result << endl;
    return 0;
}

/*
The major logic behind this code is to use dynamic programming to calculate the number of ways to place houses on both sides 
of a street. The recurrence relation used is based on the fact that for each house, it can either be placed next to the previous 
house or leave a gap. The base cases are defined for 0 and 1 house, and the result is squared to account for both sides of the 
street. The final result is printed to the console.

We first divided the problem like first calculating the number of ways to place houses on one side of the street, and then we 
square that result to account for both. If plots are empty, we can place a house in two ways: either place it or not. If we have 
one plot, we can place a house in two ways: either place it or not. If we have two plots, we can place houses in three ways: 
place a house in the first plot, place a house in the second plot, or place houses in both plots. For more than two plots, we 
can use the recurrence relation
*/