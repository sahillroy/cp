#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int>& arr) {
        set<int> a(arr.begin(), arr.end());  // pushing array to set to remove the repetitive elements and sorted
        vector<int> nums(a.begin(),a.end()); //Puts them into a array for easy indexed access.
        int sum = 0;
        int n = arr.size();

        if(nums[n-1]<0){// conditon when the last element(max) is negative so the max value will be the last element
            return nums[n-1];
        }
        for (auto val : nums) {  //calculating the maximum sum
            if(val>0){//ignoring -ve element so to get max sum
            sum += val;
            }
        }
        return sum;
    }

int main(){
    vector<int> arr;
    int n;

    cout<<"Enter the Number of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int res = maxSum(arr);

    cout<<"The maximum sum of the subbarray in which all elements are unique is: "<< res << endl;
    return 0; 
}

/*
We have to give the maximum sum of such subarray from the array and we can delete elements if we want but we want the sum of that subarray 
whose elements are unique. Like for eg   1 1 0 1 1 
the max sum will be 1 as 1 can be included once and adding 0+1 

so here we are pushing element of array to set to remove duplicates and getting it in sorted order and then putting back into an new array
as set does not allow indexing so we can't iterate it to get max sum of subarray

if the last element of array is negative then we are returning it as it will be max sum of the array
otherwise we are calculating the sum
*/