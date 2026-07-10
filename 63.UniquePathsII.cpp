#include <bits/stdc++.h>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>>dp(m,vector<int>(n,0));

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(grid[i][j]==1) dp[i][j]=0; // If there's an obstacle, set paths to 0
            else if(i==0 && j==0) dp[i][j]=1; // Starting point
            else{
                int up=0,left=0;
                if(i>0) up=dp[i-1][j]; // Paths from above
                if(j>0) left=dp[i][j-1]; // Paths from left
                dp[i][j]=up+left; // Total paths to current cell
            }
        }
    }
    return dp[m-1][n-1];
}


int main() {
    int m, n;

    cout << "Enter the number of rows: ";
    cin >> m;   

    cout << "Enter the number of columns: ";
    cin >> n;
     
    vector<vector<int>> grid(m, vector<int>(n));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Enter the value for cell (" << i << ", " << j << ") (0 for empty, 1 for obstacle): \n";
            cin >> grid[i][j];
        }
    }

    int res = uniquePathsWithObstacles(grid); // Assuming grid is defined and filled with the input values
    
    cout<<"The number of unique paths from the top-left corner to the bottom-right corner is: " << res << endl;
    return 0;
}