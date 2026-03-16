#include <bits/stdc++.h>
using namespace std;

int mah(vector<int> arr){
        int n = arr.size();
        vector<int> nsl(n,-1),nsr(n,n);
        stack<int> st;

        for(int i=0 ; i<n ; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            if(!st.empty()) nsl[i] = st.top();
            st.push(i);
        }

    while(!st.empty()) st.pop();
    for(int i=n-1 ; i>=0 ; i--){
        while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
        if(!st.empty()) nsr[i] = st.top();
        st.push(i);
    }
    int maxx=0;
    for(int i=0 ; i<n ; i++){
        int width = nsr[i] - nsl[i] -1;
        maxx = max(maxx,arr[i]*width);
    }
    return maxx;
}
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m =  matrix.size();
        int n = matrix[0].size();
        int area = 0;

        vector<int> heights(n,0);

        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(matrix[i][j] == '1') heights[j] +=1;
                else heights[j] = 0;
                cout<<heights[j]<<" ";
            }
            cout<<endl;
            area = max(area,mah(heights));
        }
        return area;
    }
    
    int main() {
        int m, n;
        cout<<"Enter the number of rows and columns in the matrix: ";
        cin>>m>>n;
        vector<vector<char>> matrix(m, vector<char>(n));
        cout<<"Enter the binary matrix (0s and 1s): "<<endl;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                cin>>matrix[i][j];
            }
        }
        int result = maximalRectangle(matrix);
        cout<<"The area of the largest rectangle containing only 1's is: "<<result<<endl;
        return 0;
    }

/*
In this code, we are using a helper function `mah` (which stands for "maximal area histogram") to calculate the largest rectangle 
area in a histogram represented by the `heights` vector. The `maximalRectangle` function iterates through each row of the binary 
matrix and updates the `heights` vector to represent the histogram of 1's up to that row. It then calls the `mah` function to find 
the largest rectangle area for that histogram and keeps track of the maximum area found.
The `mah` function uses a stack to find the nearest smaller elements to the left and right for each bar in the histogram, which helps
in calculating the width of the rectangle that can be formed with each bar as the height. Finally it calculates the area for each bar
and returns the maximum area found.

*/