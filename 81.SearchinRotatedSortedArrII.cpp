#include<bits/stdc++.h>
using namespace std;

bool rotatedarr(vector<int> arr ,int &n,int &target){
    int low = 0;
    int high = n-1;

    while(low<high){
        int mid = low + (high - low)/2;// this formula is used as it Prevents Integer Overflow if low and high are large number(i.e > INT_MAX)
        
        if(arr[mid] == target){
            return true;
        }

        if(arr[low]<=arr[mid]){
          if(arr[low] < target && arr[mid]> target){
            high = mid -1;
          }
          else{
            low = mid + 1;
          }
        }

        else if(arr[mid] < arr[high]){
            if(arr[high]> target && arr[mid]< target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }

        // Duplicates: cannot decide, shrink window
        else{ // if not written TLE happens as it goes in infinite loop if low == mid == high (val) as not conditon is there for solving it
            if(arr[low] == arr[mid]){
                low++;
            }
            if(arr[high] == arr[mid]){
                high--;
            }
        }
    }
    return false; // if true is not returned from inside of while loop that means target is not present
}

int main(){
    vector<int> arr;
    int n,target;

    cout<<"Enter the number of Elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter the target Element: ";
    cin>>target;

    bool res = rotatedarr(arr,n,target);

    if(res){
    cout<<"The Element is present in the array.";
    }
    else{
        cout<<"The Element is not present in the array.";
    }
    return 0;
}

/*
why this method is used for sorting these types of Questions??
It remains partially sorted:
At least one half (left or right of mid) is guaranteed to be sorted in each step.
Key property enabling binary search: If one side is sorted, we can check if the target lies within 
that half and reduce the search space by half.

Why we “check which half is sorted” (two binary sorting checks) ??
At each step:
If nums[low] <= nums[mid], then the left half is sorted.
Else if nums[mid] <= nums[high], then the right half is sorted

What about duplicates?
In the presence of duplicates, it is possible:
nums[low] == nums[mid] == nums[high]
We cannot determine which half is sorted.
To avoid infinite loops, we increment low++ and decrement high-- to shrink the window
*/