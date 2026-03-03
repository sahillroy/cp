#include <bits/stdc++.h>
using namespace std;

vector<int> NextGreater(vector<int> &nums1, vector<int> &nums2) {
    unordered_map<int,int> mpp;
    stack<int> st;

    // Step 1: Compute next greater for nums2
    for(int i = nums2.size() - 1; i >= 0; i--) {
        while(!st.empty() && st.top() <= nums2[i]) {
            st.pop();
        }

        if(st.empty()) {
            mpp[nums2[i]] = -1;
        } else {
            mpp[nums2[i]] = st.top();
        }

        st.push(nums2[i]);
    }

    // Step 2: Build result for nums1
    vector<int> ans;
    for(int i = 0; i < nums1.size(); i++) {
        ans.push_back(mpp[nums1[i]]);
    }

    return ans;
}

int main() {
    vector<int> nums1;
    vector<int> nums2;

    int n1,n2;

    cout<<"Enter the number of elements in nums1: "<<endl;
    cin>>n1;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n1 ; i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }

    cout<<"Enter the number of elements in nums2: "<<endl;
    cin>>n2;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n2 ; i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }

    vector<int> res = NextGreater(nums1,nums2);

    cout<<"Next greater elements: "<<endl;
    for(int x : res){
        cout<<x<<" ";
    }

    return 0;
}
/*
We have to create an array which contains the next greatest elements for elements for nums1 by taking reference of nums2
Here we are using hashmaps for mapping the next greatest element for each elements in nums1

First we are iterating the nums2 array from end and marking next greatest element for each element
We are using a stack for this
for last element the stack will be initially empty so we will map it with -1 (i.e. for last element the mpp value will be -1)
then we are pushing that element in stack
now for last second element it will check the first condition if st.top() is smaller than last second element
  if yes -> that means the the last second element is greater than last element i.e there is no greater element for last second element so
  we are popping the st.top() until we get larger value than the element. If stack becomes empty that means no next greatest element exist
  so map it to -1
  if not -> that means stack contian the next greatest element of last second element so we will mapp it to stack.top()
regarless of condition we are pushing that element to the stack
At end we will create the array of the nums1 arrays next greatest element by using it's hashmap

ex: nums1[4,1,2] and nums2[1,3,4,2]

for 2 st will be empty so its next greatest element (mapped) is -1
push 2 in st st.top(2)
for 4 it will check first condition !st.empty() and 4>st.top(2) so st will popped
now stack is again empty so directly 4's next greatest is -1
push 4 in st
for 3 it will check first condition but st.top is greater than 3 so while loop will not run
the next greatest element for 3 will be assigned st.top = 4
push 3 in st
for 1 it will check first condition ad again while loop will not run 
the next greatest element for 1 will be assigned st.top = 3
push 1 in st
Loop will terminate
*/