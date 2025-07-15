#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums ,int &n) {
    int low = 0;
    int high = n - 1;
    int res = INT_MAX;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[low] <= nums[mid]) { // if left half sorted
            res = min(res, nums[low]);
            low = mid + 1; // search other half
        } else { // if right half sorted
            res = min(res, nums[mid]);
            high = mid - 1;
        }
    }
    return res;
}

int main(){
    vector<int> nums;
    int n;

    cout<<"Enter the number of Elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int res = findMin(nums,n);

    cout<<"The Smallest Element in the array is: "<< res << endl;
    return 0;
}
/*
here binary sort is used for finding min as it helps us in finding which part of the array is still sorted after rotation if its the left 
part then the first if conditions is used when low<mid here as this part is sorted the lowest element will me at low so we will take it as ans
and cross check it with current ans and take the lowest one and then low = mid+1 whuch lead us to the unsorted part of the array and here we 
again compare it and take min value

if right part is sorted we'll go to else part first and take the mid as lowest element and then go towards left part which is unsorted
*/