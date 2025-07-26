#include<bits/stdc++.h>
using namespace std;

int smallestdiv(vector<int> arr,int &val){

    int low = 1 ; //since the lowest divisor will be 1
    int high = *max_element(arr.begin(),arr.end());

    while(low<high){
        int mid = low + (high-low)/2;

        int sum =0;
        for(auto val : arr){
            sum += (val + mid - 1/mid);
        }
        if(sum <= val){
            high = mid;// if this value satisfys then we are checking for lower value
        }
        else{
            low = mid+1;
        }
    }
    return low; // ultimately the value will end up on low only sp we are returning low
}

int main(){
    int n,val;
    vector<int> arr;

     cout<<"Enter the length of the array: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter the threshold value: ";
    cin>>val;

    int result = smallestdiv(arr,val);

    cout<<"The smallest divisor for the array having threshold" <<val <<"is: "<< result << endl;
    return 0;
}
/*
In this question we have the return the divisor's value than can be divided by each element of array and then the sum of their quotient 
ahould be less than threshold value like for arr nums = [1,2,5,9], threshold = 6
 We can get a sum to 17 (1+2+5+9) if the divisor is 1. 
If the divisor is 4 we can get a sum of 7 (1+1+2+3) and if the divisor is 5 the sum will be 5 (1+1+1+2). so the output will be 5

first we are initializing low = 1 as it is the min divisor any number can have and high will be max element of the array because dividing
 a number by something bigger than itself will always give 1 (after rounding up) so min threshold will the size of array.

now we are using a for loop for calculating sum.In this type of loops val is already the actual number from nums, you do not need to index
into nums again. so writing nums[val] will give error we always have to write val to get element and not index

if the sum is less than threshold or equal then we are checking for lower value as we have to find min divisor and if it doesn't we are making
low =mid +1 for checking higher value. At the end we are always returning low as the min divisor will always end up on low(do dryrun for cross
checking)
*/