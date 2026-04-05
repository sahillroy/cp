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