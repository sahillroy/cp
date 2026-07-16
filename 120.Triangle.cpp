#include <bits/stdc++.h>
using namespace std;

int TriangleSum(vector<vector<int>>& triangle) {
    int n = triangle.size();

    vector<vector<int>> dp(n, vector<int>(n, 0));
    for(int j=0 ; j<n ; j++) dp[n-1][j] = triangle[n-1][j];
    for (int i = n - 2; i >= 0; --i) {
        for (int j = i; j >= 0; --j) {
                int down = triangle[i][j] + dp[i+1][j];
                int diag = triangle[i][j] + dp[i+1][j+1];
                dp[i][j] = min(down,diag);
        }
    }
    return dp[0][0];
}

int main() {
    int n;
    cout << "Enter the number of rows in the triangle: ";
    cin >> n;

    vector<vector<int>> triangle(n);
    for (int i = 0; i < n; ++i) {
        triangle[i].resize(i + 1);
        for (int j = 0; j <= i; ++j) {
            cout << "Enter value for triangle[" << i << "][" << j << "]: ";
            cin >> triangle[i][j];
        }
    }

    int res = TriangleSum(triangle);

    cout<<"Maximum path sum in the triangle is: " << res << endl;

    return 0;
}

/*
In this code, we define a function `TriangleSum` that takes a 2D vector representing a triangle of numbers and calculates the 
maximum path sum from the top to the bottom. The function uses dynamic programming to build a `dp` table that stores the maximum 
sums for each position in the triangle. The main function prompts the user to input the number of rows and the values for each 
position in the triangle, then calls `TriangleSum` and outputs the result.
In this we are performing tabulation method to solve the problem. In the tabulation method, we start from the bottom of the 
triangle and work our way up, calculating the maximum path sum for each position based on the values below it. This approach 
ensures that we only need to traverse the triangle once, resulting in an O(n^2) time complexity, where n is the number of rows
in the triangle. The space complexity is also O(n^2) due to the `dp` table used to store intermediate results.
*/