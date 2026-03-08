#include <bits/stdc++.h>
using namespace std;

int Trap(vector<int> &arr, int n){
        int left = 0;
        int right = n - 1;

        int lmax = 0;
        int rmax = 0;
        int total = 0;

        while(left <= right){
            
            if(arr[left] <= arr[right]){

                if(arr[left] >= lmax)
                    lmax = arr[left];
                else
                    total += lmax - arr[left];

                left++;
            }
            else{
                if(arr[right] >= rmax)
                    rmax = arr[right];
                else
                    total += rmax - arr[right];
                right--;
            }
        }
        return total;
}

int main() {

    int n;
    vector<int> arr;

    cout<<"Enter the Number of Blocks: ";
    cin>>n;

    cout<<"Enter the heights of blocks: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int res = Trap(arr,n);

    cout<<"The total number of blocks of rainwater stored is: "<<res<<endl;
    
    return 0;
}

/*
We are assigning 2 pointers left and right and 2 variables for storing leftsum and rightsum

we are checking the left and right pointer and choosing the one with lower value and then checking it with their respective lmax
or rmax if block is greater than max then we update the max else we add the difference in the total as that gap will store the
water
*/