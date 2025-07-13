#include<bits/stdc++.h>
using namespace std;

int rotatedarr(vector<int> arr , int &n , int target){
    int low =0;
    int high = n-1;

    while(low<high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            return mid;
        }
        if(arr[low] < arr[mid]){// for left half
            if( arr[low] <= target && arr[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else if(arr[mid]<arr[high]){//for right half
            if( arr[high] >= target && arr[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }    
        }
        else{
            return -1;
        }
    }
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

    int res = rotatedarr(arr,n,target);

    if(res == -1){
    cout<<"The Element is not present in the array.";
    }
    else{
        cout<<"The Element is present int the array at: "<<res<<endl;
    }
    return 0;
}