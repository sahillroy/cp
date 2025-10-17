#include <bits/stdc++.h>
using namespace std;

void Combinationsum(vector<int>& nums, vector<int> &ans, int index, vector<vector<int>> &res, int target) {
    if (target == 0) {
        res.push_back(ans);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        if (i > index && nums[i] == nums[i - 1])  // skip duplicates
            continue;
        if (nums[i] > target)
            break;

        ans.push_back(nums[i]);
        Combinationsum(nums, ans, i + 1, res, target - nums[i]);  // use once
        ans.pop_back();
    }
}

vector<vector<int>> combination(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    vector<int> ans;
    vector<vector<int>> res;
    Combinationsum(nums, ans, 0, res, k);
    return res;
}

int main() {
    vector<int> arr;
    int n, k;

    cout << "Enter the Number of Elements: ";
    cin >> n;

    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << "Enter the target sum: ";
    cin >> k;

    vector<vector<int>> result = combination(arr, k);

    cout << "\nAll unique combinations summing to " << k << ":\n";
    for (auto &r : result) {
        for (auto &num : r) cout << num << " ";
        cout << endl;
    }

    return 0;
}
/*
This code finds all unique combinations of numbers from an input array that add up to a given target sum.
It first sorts the array to easily detect and skip duplicate elements. Then, using a recursive backtracking approach, it explores all possible number combinations — adding a number, reducing the target, and moving to the next index.
When the remaining target becomes zero, the current combination is stored as a valid result.
Finally, it prints all unique combinations that meet the target condition.
*/