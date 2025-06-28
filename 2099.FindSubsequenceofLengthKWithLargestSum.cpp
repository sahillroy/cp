#include <bits/stdc++.h>
using namespace std;

  vector<int> maxSubsequence(vector<int>& arr,int n, int k) {
    
    unordered_map<int, int> freq;   // frequency map for top k elements
    vector<int> copy = arr;   // copy to preserve order
    vector<int> res;

    // Step 1: Sort to identify the k largest elements
    sort(arr.begin(), arr.end());

    // Step 2: Populate frequency map with the k largest elements
    // Here we still need indexing to access the last k elements of sorted nums
    for (int i = n - k; i < n; i++) {
        freq[arr[i]]++;
    }

    // Step 3: Traverse original array using range-based for loop
    for (auto x : copy) {
        if (freq[x] > 0) {
            res.push_back(x);
            freq[x]--;
        }
    }

    return res;
}

int main(){
    int n,k;
    vector<int> arr;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Find the length of subsequence: ";
    cin>>k;

    vector<int> result = maxSubsequence(arr,n,k);

    cout<<"The subsequence has the largest sum is: ";
    for(int i=0 ; i<result.size() ; i++){
            cout<<result[i]<<" ";
    }
    return 0;
}
// here first we are arranging the array in ascending order then we are mapping only n-k elements in that array (i.e righmost)
// as they will give max sum and it also satisfy the the condition of length of subsequence. The next loop is used for writing 
// the subseq in result arr and hashing is used so if element is occuring more than 1 then then the value of freq will be 
//decremented

//chatgpt:
// We use an unordered_map<int, int> freq to track how many times each of these top k elements appears (to handle duplicates
// correctly).
// This ensures that if, for example, the array has [2, 2, 3, 3, 4] and k = 4, and the top 4 largest are [2, 3, 3, 4],
// we accurately count:
// freq[2] = 1
// freq[3] = 2
// freq[4] = 1

//We iterate over copy, which contains the original nums in original order.
// For each element x in copy, we:
// Check if x is one of the top k largest elements (using freq[x] > 0).
// If yes:
// We add x to res to include it in our subsequence.
// We decrement freq[x] by 1 so that we include the correct count for duplicates and stop adding when we have taken the 
//correct number of that value.