#include <bits/stdc++.h>
using namespace std;

int Minsum(int n, int k){
    int sum =0;
    unordered_set<int> st;
    for(int i=1 ; st.size()<n ; i++){
        if(st.find(k-i) == st.end()){
            st.insert(i);
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n,k;
    cout<<"Enter the size of the array and the value of k: ";
    cin>>n>>k;

    int res = Minsum(n,k);
    cout<<"The minimum sum of a k-avoiding array of size "<<n<<" is: "<<res<<endl;
    return 0;
}

/*
In this code, we define a function `Minsum` that takes two integers `n` and `k` as input and returns the minimum sum of a k-avoiding
array of size `n`. We use an unordered set `st` to keep track of the elements in the array. We iterate through integers starting 
from 1, and for each integer, we check if its complement with respect to `k` (i.e., `k - i`) is already in the set. If it is not, 
we add the integer to the set and update the sum. The process continues until we have `n` unique elements in the set. The main 
function reads the values of `n` and `k` from the user, calls the function, and prints the result.
*/