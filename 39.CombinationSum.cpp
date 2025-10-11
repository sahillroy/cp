#include <bits/stdc++.h>
using namespace std;

void Combinationsum(vector<int>& nums, vector<int> &ans, int i, vector<vector<int>> &res,int target) {
    if (target == 0) {
        res.push_back(ans);
        return;
    }

    if(i == nums.size() || target<0){
        return; // extreme condition when arr is fully traversed or target is negative
    }

    // include current element
    ans.push_back(nums[i]);
    Combinationsum(nums, ans, i , res,target-nums[i]);

    // exclude current element
    ans.pop_back();
    Combinationsum(nums, ans, i +1, res,target);
}

vector<vector<int>> combination(vector<int>& nums,int k) {
    vector<int> ans;        
    vector<vector<int>> res;        
    Combinationsum(nums, ans, 0, res,k);
    return res;
}

int main() {
    vector<int> arr;
    int n,k;

    cout << "Enter the Number of Elements: ";
    cin >> n;

    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout<<"Enter the target sum: ";
    cin>>k;

    vector<vector<int>> result = combination(arr,k);

    cout << "\nAll Subsets:\n";
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
we can use the element infinite number of times in an subsequence to get desired sum
Everytime we are using an element we are subtracting it from sum and recursively calling 
while including an element we are not incrementing index and adding the same element until tagret is negative or zero and while
excluding we are incrementing the index and checking for next index element again 

If target == 0 → push current combination (ans) to result.

If index == nums.size() or target < 0 → stop recursion.

Include current element → stay on same index, reduce target.

Exclude current element → move to next index, keep target same.

Backtrack (remove last added element) before exploring next path.
*/