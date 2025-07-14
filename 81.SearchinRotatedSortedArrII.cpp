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