#include<bits/stdc++.h>
using namespace std;

vector<int> firstandlastpos(vector<int> arr , int &n , int &target){
    int start = -1;// assigned initially as -1 if element were not present
    int end = -1;// 2pointers for monitoring starting and ending pos of element
    vector<int> res ;

    for(int i=0 ; i<n ; i++){//first loop will traverse from start and will store the end point as it will reach the last target
        if(arr[i] == target){// and store its position
            end = i;// here end is assigned as this loop will encounter all the target values but store the end index of target
        }
    }

    for(int j=n-1 ; j>=0 ; j--){//second loop will traverse from end and will store the start point as it will reach the first target 
        if(arr[j] == target){   // and store its position
            start = j;// here start is assigned as this loop will encounter all the target values but store the start index of target
        }
    }
    res.push_back(start);
    res.push_back(end);

    return res;
}

int main(){
    vector<int> arr;
    int n,target;

    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements in non-descending order: ";
    for(int i =0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter the target element to find it's staring and ending index: ";
    cin>>target;

    vector<int> res = firstandlastpos(arr,n,target);

    if (res[0] == -1 && res[1] == -1){
        cout<<"The target element is not present in the array: ";
        for(int i=0 ; i< res.size() ; i++){
        cout<<res[i]<<" ";
    }
    }
    else{
    cout<<"The starting and ending index of this element are : ";
    for(int i=0 ; i< res.size() ; i++){
        cout<<res[i]<<" ";
    }
}
    return 0;
}
/*
here the first loop starting from beginning will encounter 8 of pos 3 first but it will be overwritten by the 8 with pos 4 thats why 
end is storing its value and vice versa for 2nd __introsort_loop
the optimal method for solving this problem is by taking 3 pointers start mid and end if check 
if (v[mid] == key) {
      res = mid;
      start = mid + 1;

    } else if (key < v[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
*/