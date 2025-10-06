#include <bits/stdc++.h>
using namespace std;

void printss(vector<int>& nums, vector<int> &ans, int i, vector<vector<int>> &res) {
    if (i == nums.size()) {
        res.push_back(ans);
        return;
    }

    // include current element
    ans.push_back(nums[i]);
    printss(nums, ans, i + 1, res);

    // exclude current element
    ans.pop_back();
    printss(nums, ans, i + 1, res);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ans;        
    vector<vector<int>> res;        
    printss(nums, ans, 0, res);
    return res;
}

int main() {
    vector<int> arr;
    int n;

    cout << "Enter the Number of Elements: ";
    cin >> n;

    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<vector<int>> result = subsets(arr);

    cout << "\nAll Subsets:\n";
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
