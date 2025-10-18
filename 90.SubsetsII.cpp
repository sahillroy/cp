#include <bits/stdc++.h>
using namespace std;

void subsets1(vector<int> &arr ,vector<int> &ans,vector<vector<int>>&res,int index){
     res.push_back(ans);  // push current subset

        for (int i = index; i < arr.size(); ++i) {
            // skip duplicates at the same recursion level
            if (i > index && arr[i] == arr[i - 1]) continue;

            ans.push_back(arr[i]);
            subsets1(arr, ans,res,i+1);
            ans.pop_back();
        }
}

void subsets(vector<int> &arr){
    vector<int> ans;
    vector<vector<int>> res;
    subsets1(arr,ans,res,0);

    sort(res.begin(),res.end());
    for (auto &s : res) {
        cout << "[";
        for (int i = 0; i < s.size(); ++i) {
            if (i) cout << ", ";
            cout << s[i];
        }
        cout << "]\n";
    }
}

int main() {
    vector<int> arr;
    int n;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    subsets(arr);

    return 0;
}

/*
we have to return all subset of that arr. 
Firstly we are initializing an temp arr which is subsets an will pushed in res.
We are sorting the array and then calling subsets1 function
we are intially pushing the subset from previous recursive call and then running a for loop where if we get 2 consecutive same elements we are skipping it(as arr is sorted) in making a subset 
For making a subset we are pushing a curr element and recursively calling the subsets1 and after after this recursive call we are popping
the topmost element(like 2 condition in 1 we are including and other we're not)     
*/