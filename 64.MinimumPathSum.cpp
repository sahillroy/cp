#include <bits/stdc++.h>
using namespace std;

int MinimumPathSum(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> dp(m, vector<int>(n, 0));

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==0 && j==0) dp[i][j] = grid[i][j]; // Starting point
            else{
                int up = (i > 0) ? dp[i-1][j] : INT_MAX; // Path sum from above
                int left = (j > 0) ? dp[i][j-1] : INT_MAX; // Path sum from left
                dp[i][j] = grid[i][j] + min(up, left); // Minimum path sum to current cell
            }
        }
    }
    return dp[m-1][n-1]; // Return the minimum path sum to the bottom-right corner
}

int main() {
    int m,n;

    cout<< "Enter the number of rows: ";
    cin>>m;

    cout<< "Enter the number of columns: ";
    cin>>n;

    vector<vector<int>> grid(m, vector<int>(n));
    
    cout<< "Enter the elements of the grid: ";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>grid[i][j];
        }
    }

    int res = MinimumPathSum(grid); // Assuming grid is defined and filled with the input values

    cout<<"The minimum path sum from the top-left corner to the bottom-right corner is: " << res << endl;

    return 0;
}