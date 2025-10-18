#include <bits/stdc++.h>
using namespace std;

void Combinationsum(vector<int> &ans, vector<vector<int>> &res, int k, int n, int start) {
    if (k == 0 && n == 0) {
        res.push_back(ans);
        return;
    }
    if (k < 0 || n < 0) return;

    for (int i = start; i <= 9; i++) {
        ans.push_back(i);
        Combinationsum(ans, res, k - 1, n - i, i + 1);
        ans.pop_back();
    }
}

vector<vector<int>> combination(int k, int n) {  
    vector<int> ans;
    vector<vector<int>> res;
    Combinationsum(ans, res, k, n, 1);
    return res;
}

int main() {
    int n, k;

    cout << "Enter the number of elements for subsequence (k): ";
    cin >> k;
    cout << "Enter the target sum (n): ";
    cin >> n;

    vector<vector<int>> result = combination(k, n);  

    cout << "\nAll unique combinations summing to " << n << ":\n";
    for (auto &r : result) {
        for (auto &num : r) cout << num << " ";
        cout << endl;
    }

    return 0;
}
/*
We are initiaizing 2 arrays one for subseq and 2nd for storing that subseq
in the Combinationsum function we are checking if the size of subseq and sum is 0 then we are pushing that subseq in the res arr
We are using a if condition for extreme condition
We are eunning a for loop for each digits 1 - 9 and pushing that digit and subtracting it from sum and decreasing the size count of 
subseq by 1 and then recursively calling the function
*/