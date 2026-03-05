#include <bits/stdc++.h>
using namespace std;

vector<int> NextGreat(vector<int> &nums, int n){
    vector<int> ans(n, -1);
    stack<int> st;

    // Traverse twice for circular behavior
    for(int i = 0; i < 2 * n; i++) {
        int index = i % n;

        while(!st.empty() && nums[st.top()] < nums[index]) {
            ans[st.top()] = nums[index];
            st.pop();
        }

        // Only push indices in first pass
        if(i < n) {
            st.push(index);
        }
    }

    return ans;
}

int main() {
    vector<int> arr;
    int n;

    cout<<"Enter the number of Elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    vector<int> res = NextGreat(arr,n);

    cout<<"The array containing the next greatest Element is: ";
    for(int i=0 ; i<n ; i++){
        cout<<res[i]<<endl;
    }
    return 0;
}
/*
here we have circular array for finding nexy greatest element
so we are traversing the array twice and for index we are taking modulus so that index remain within 0 to n-1
In first pass we are diretly pushing the element in stack
if the element is greater that st.top() we are popping the stack and assigning-1
if not we are assigning the next greatest element as st.top() and then pushing the element in stack
*/