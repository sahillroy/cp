#include <bits/stdc++.h>
using namespace std;

    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        long long t0 =0;
        long long t1 =1;
        long long t2 =1;
        long long tn;

        for(int i=3 ; i<=n ; i++){
            tn = t0+t1+t2;
            t0 = t1;
            t1 = t2;
            t2 = tn;
        }

        return tn;
    }

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int result = tribonacci(n);
    cout<<"The "<<n<<"-th Tribonacci number is: "<<result<<endl;
    return 0;
}

/*
In this implementation, we define a function tribonacci that takes an integer n as input and returns the n-th Tribonacci number. 
The function first checks for the base cases: if n is 0, it returns 0;
if n is 1 or 2, it returns 1. For values of n greater than 2, we use a loop to calculate the Tribonacci numbers iteratively. 
We maintain three variables t0, t1, and t2 to store the last three Tribonacci numbers, and we calculate the next Tribonacci number 
tn as the sum of these three. We then update t0, t1, and t2 for the next iteration. 
Finally, we return the n-th Tribonacci number tn.

*/