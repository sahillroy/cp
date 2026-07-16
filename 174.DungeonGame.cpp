#include <bits/stdc++.h>
using namespace std;

int Dungeon(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));

    dp[m-1][n-1] = max(1, 1 - matrix[m-1][n-1]);

    for (int i = m - 2; i >= 0; --i) {
        dp[i][n-1] = max(1, dp[i+1][n-1] - matrix[i][n-1]);
    }

    for (int j = n - 2; j >= 0; --j) {
        dp[m-1][j] = max(1, dp[m-1][j+1] - matrix[m-1][j]);
    }

    for (int i = m - 2; i >= 0; --i) {
        for (int j = n - 2; j >= 0; --j) {
            int minHealthOnExit = min(dp[i+1][j], dp[i][j+1]);
            dp[i][j] = max(1, minHealthOnExit - matrix[i][j]);
        }
    }

    return dp[0][0];
}

int main() {
    int m, n;

    cout<<"Enter the number of rows (m): ";
    cin>>m;
    cout<<"Enter the number of columns (n): ";
    cin>>n;

    cout<<"Enter the elements of the matrix: ";
    vector<vector<int>> matrix(m, vector<int>(n));

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>matrix[i][j];
        }
    }

    int result = Dungeon(matrix);

    cout<<"The minimum initial health required to reach the bottom-right corner is: " << result << endl;

    return 0;
}

/*
In this Dungeon function, we are calculating the minimum initial health required for a player to reach the bottom-right corner of a 
dungeon represented by a 2D matrix. The player can only move right or down, and each cell in the matrix can either increase or
decrease the player's health.
We use dynamic programming to solve this problem. We create a 2D dp array where dp[i][j] represents the minimum health required to 
reach the bottom-right corner from cell (i, j). We initialize the bottom-right cell based on its value and then fill the dp array in 
reverse order, considering the minimum health required from the right and down cells. The final answer is found in dp[0][0], which 
gives us the minimum initial health required to start at the top-left corner of the dungeon.
The time complexity of this solution is O(m*n), where m is the number of rows and n is the number of columns in the matrix. The 
space complexity is also O(m*n) due to the dp array used for storing intermediate results.  
*/