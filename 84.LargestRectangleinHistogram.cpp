#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
        int maxx =0;
        int n = heights.size();

        vector<int> right(n,n),left(n,-1);
        stack<pair<int,int>> st;

        for(int i=0 ; i<n ; i++){
            while(!st.empty() && st.top().first>= heights[i]) st.pop();
            if(!st.empty()) left[i] = st.top().second;

            st.push({heights[i],i});
        }

        while(!st.empty()) st.pop();

        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && st.top().first >= heights[i]) st.pop();
            if(!st.empty()) right[i] = st.top().second;
            
            st.push({heights[i], i});
        }

        for(int i=0 ; i<n ; i++){
            int end = right[i] -1; //rectangle must stop before it.
            int start = left[i]+1; //rectangle must start after it.
            int width = end - start + 1;
            maxx = max(maxx, heights[i] * width);
        }

        return maxx;
    }

int main() {
    int n;
    cout<<"Enter the number of bars in the histogram: ";
    cin>>n;

    vector<int> heights(n);
    cout<<"Enter the heights of the bars: ";
    for(int i=0; i<n; i++) {
        cin>>heights[i];
    }

    int result = largestRectangleArea(heights);
    cout<<"The area of the largest rectangle in the histogram is: "<<result<<endl;
    
    return 0;
}

/*
We are using a stack to keep track of the indices of the bars in the histogram. We iterate through the heights of the bars and for
each bar, we pop from the stack until we find a bar that is shorter than the current bar. This helps us determine the left boundary
for the current bar. We then push the current bar's height and index onto the stack.

After processing all bars, we repeat the process in reverse to determine the right boundary for each bar. Finally, we calculate the
area for each bar using the formula: area = height * width, where width is determined by the left and right boundaries. We keep track
of the maximum area encountered and return it as the result.

*/