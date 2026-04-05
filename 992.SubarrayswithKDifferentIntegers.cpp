#include <bits/stdc++.h>
using namespace std;

int atmost(vector<int>& num, int k){
    int i = 0, j = 0, ans = 0;
    unordered_map<int,int> mp;
    while(j < num.size()){
        mp[num[j]]++;
        while(mp.size() > k){
            mp[num[i]]--;
            if(mp[num[i]] == 0) mp.erase(num[i]);
            i++;
        }
        ans += j - i + 1;
        j++;
    }
    return ans;     
}

int KDifferent(vector<int>& nums, int k) {
    return atmost(nums, k) - atmost(nums, k-1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cout << "Enter the number of different integers: ";
    cin >> k;

    int res = KDifferent(nums, k);
    cout << "Number of subarrays with " << k << " different integers: " << res << endl;
    return 0;
}

/*
In this code, we define a function `atmost` that calculates the number of subarrays with at most `k` different integers. The main 
function `KDifferent` then uses this helper function to find the number of subarrays with exactly `k` different integers by 
subtracting the count of subarrays with at most `k-1` different integers from the count of subarrays with at most `k` different 
integers.
The `main` function prompts the user to input the number of elements, the elements themselves, and the number of different integers 
`k`. Finally, it calls the `KDifferent` function and outputs the result.
The atmost function uses a sliding window approach with two pointers `i` and `j` to maintain a window of subarrays. 
It uses an unordered map to count the frequency of integers in the current window and adjusts the window size to ensure that it 
contains at most `k` different integers. The total count of valid subarrays is accumulated in the variable `ans`.

*/