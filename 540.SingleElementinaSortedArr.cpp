#include<bits/stdc++.h>
using namespace std;

int singleelement(vector<int> arr, int &n){
    int low =0;
    int high = n-1;

    while(low<high){
        int mid = low + (high-low)/2;

        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            return arr[mid];// this is if single element is in middle 
        }
        else if(mid % 2 ==0){//we have not encountered the single element so it is in right hand side
            (arr[mid] == arr[mid+1]) ? low =mid+2 : high= mid;
        }
        else{//we have encountered the single element so it is in left hand side as even odd pair is disturbed
            (arr[mid]== arr[mid-1]) ? low=mid+1 : high=mid-1;
        }
    }
    return arr[low];

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

    int res = singleelement(arr,n);

    cout<<"The Single Element in sorted array is: "<< res << endl;
    return 0;
}
/*
we can also solve this problem using hasmaps but for understanding we are doing it with binary search
Before the single element → pairs start at even indices.
After the single element → pairs start at odd indices.
By checking if the mid element forms a pair with its neighbor, we decide which half to discard, reducing the search space by half each time
*/