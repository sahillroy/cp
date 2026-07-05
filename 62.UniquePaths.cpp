#include<bits\stdc++.h>
using namespace std;

int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, 1)); // Initialize a 2D DP array with 1s

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1]; // The number of paths to reach (i,j) is the sum of paths from above and left
        }
    }

    return dp[m - 1][n - 1]; // Return the number of unique paths to reach the bottom-right corner
}

int main(){
    int m,n;

    cout<<"Enter the number of rows: ";
    cin>>m;

    cout<<"Enter the number of columns: ";
    cin>>n;

    int res = uniquePaths(m,n);
    cout<<"The number of unique paths from the top-left corner to the bottom-right corner is: "<<res<<endl;
    return 0;
}

/*
In this code, we define a function `uniquePaths` that calculates the number of unique paths from the top-left corner to the bottom-right 
corner of an m x n grid. The function uses dynamic programming to build a 2D array `dp`, where each cell `dp[i][j]` represents the number 
of unique paths to reach that cell. The base case is initialized with 1s, as there is only one way to reach any cell in the first row or 
first column (by moving right or down, respectively). For other cells, the number of unique paths is calculated as the sum of the paths 
from the cell above and the cell to the left. Finally, the function returns the value in the bottom-right corner of the grid, which 
represents the total number of unique paths. The main function prompts the user for the dimensions of the grid and outputs the result.
We used a 2D DP array to store the number of unique paths to each cell, allowing us to compute the result iteratively without 
redundant calculations. This approach ensures that we efficiently calculate the number of unique paths in O(m*n) time complexity and 
O(m*n) space complexity.
*/