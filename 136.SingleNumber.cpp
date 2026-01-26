#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    vector<int> nums;

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int res = 0;
    for(auto x : nums){
        res ^=x;
    }

    cout<<"The Element with no duplicates is: "<<res<<endl;
    return 0;
}

/*
We are solving this Q using Bit Manipulation. 
As we know if we do XOR operation for same number it gives 0 (a XOR a = 0) and if we do XOR operation of any number with 0 it gives returns 
the number (a XOR 0 = a) 
So we are performing XOR operation in the array.
After performing XOR for same numbers it will give 0 and if duplicates for any number is not present it will get returned. 
*/