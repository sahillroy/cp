#include<bits/stdc++.h>
using namespace std;

int peakelement(vector<int> arr , int &n){
    int low =0;
    int high = n-1;

    while(low<high){
        int mid = low + (high - low)/2;

        if(arr[mid] > arr[mid+1] && arr[mid]> arr[mid-1]){
            return mid;
        }
        else if(arr[mid]> arr[mid+1]){// the peak element is at left as this is decreasing curve
            high = mid;    
        }
        else{// Ascending slope, peak on the right
            low = mid +1;
        }
    }
    return low;
}


int main(){
    vector<int> arr;
    int n;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the Elements in sorted order:";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int res = peakelement(arr,n);

    cout<<"The Peak Element in sorted array is: "<< res << endl;
    return 0;
}
/*
“We return low at the end because the binary search shrinks the range until low == high, which points to a guaranteed peak.”
*/