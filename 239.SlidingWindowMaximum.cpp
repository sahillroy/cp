#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> ans;
        deque<int> dq;
        for(int i=0 ; i<n ; i++){
            while(!dq.empty() && dq.front()<= i-k){ // outside ranf of sliding window
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()] <nums[i]){ // maintain monotnic stack
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
}

int main() {
    int n, k;
    cout<<"Enter the size of the array and the window size: ";      
    cin>>n>>k;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>nums[i];
    }
    vector<int> result = maxSlidingWindow(nums, k);
    cout<<"The maximum values in each sliding window are: "<<endl;
    for(int val : result) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
/*
We maintain a monotonic decreasing deque that stores the indices of the array elements. As we iterate through the array from left to 
right:
Remove out-of-bound indices: Check the front of the deque. If the index stored there is less than or equal to i−k, it means the 
element is no longer in the current sliding window, so we pop it from the front.
Maintain monotonic decreasing order: Before adding the current element nums[i], we look at the back of the deque. If the elements 
at the stored indices are smaller than nums[i], they can never be the maximum for the current or any future windows (since nums[i] 
is larger and will stay in the window longer). We pop these useless indices from the back.
Add the current index: Push the current index i to the back of the deque.
Record the maximum: Once our window has reached the required size k (i.e., when i≥k−1), the index at the front of the deque will 
always point to the maximum element for the current window. We append nums[dq.front()] to our answer array.
*/