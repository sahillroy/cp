#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    int n;

    ll sumMin(vector<int>& arr) {
        stack<int> st;

        vector<int> left(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] > arr[i]) st.pop();

            left[i] = st.empty() ? i+1 : i-st.top();
            st.push(i);
        }

        while(!st.empty()) st.pop();

        vector<int> right(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();

            right[i] = st.empty() ? n-i : st.top()-i;
            st.push(i);
        }

        ll ans = 0;
        for(int i=0;i<n;i++){
            ans += 1LL * arr[i] * left[i] * right[i];
        }

        return ans;
    }

    ll sumMax(vector<int>& arr) {
        stack<int> st;

        vector<int> left(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] < arr[i]) st.pop();

            left[i] = st.empty() ? i+1 : i-st.top();
            st.push(i);
        }

        while(!st.empty()) st.pop();

        vector<int> right(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();

            right[i] = st.empty() ? n-i : st.top()-i;
            st.push(i);
        }

        ll ans = 0;
        for(int i=0;i<n;i++){
            ans += 1LL * arr[i] * left[i] * right[i];
        }

        return ans;
    }

    long long subArrayRanges(vector<int>& arr) {
        n = arr.size();
        return sumMax(arr) - sumMin(arr);
    }
};

int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution obj;
    long long ans = obj.subArrayRanges(arr);

    cout<<"Sum of Subarray Ranges = "<<ans<<endl;

    return 0;
}
/*
For any subarray, the range is the difference between its maximum and minimum element.

A brute force solution would check every subarray and compute its min and max, but that would take O(n²) time.

Instead, we can think differently:
Rather than calculating the range for every subarray, we calculate how many subarrays each element contributes to as a minimum and as a maximum.

Using a monotonic stack, we can find for each element:

the previous smaller element and next smaller element → to determine its contribution as a minimum

the previous greater element and next greater element → to determine its contribution as a maximum

The number of subarrays where an element is the minimum or maximum depends on how far it can extend to the left and right before encountering a smaller or greater element.

Finally, the answer is:

sum of all subarray maximums − sum of all subarray minimums
*/