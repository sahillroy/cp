#include<bits/stdc++.h>
using namespace std;

int kthmissing(vector<int>arr,int &n,int &k){
    for (int i = 0; i < n; i++){
            if (arr[i] <= k) k++; //shifting k
        else break;
    }
    return k;
}

int main(){
    vector<int> arr;
    int n,k;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter the position of the missing elements: ";
    cin>>k;

    int result = kthmissing(arr,n,k);

    cout<<" The " << k << "th missing positive integer is: " << result << endl;
    return 0;
}
/*
We start from number 1, and keep checking how many numbers are missing before or at k.
If some numbers that are less than or equal to k are present in the array, they are not missing, so we push k forward to "skip over" them.

This way, we shift our view of what the k-th missing number would be.
*/