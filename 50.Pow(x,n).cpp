#include <bits/stdc++.h>
using namespace std;

double pow1(double x, long long N){
    if(N ==0){
        return 1;
    }
    if(N % 2 == 0){
        return pow1(x*x,N/2);
    }
    else{
        return x*pow1(x,N-1);
    }
}

double Pow(double x , int n){
    long long N = n; // converting pow to long long

    if(N<0){
        x = 1/x;
        N = -N; //converting it to positive
    }

    return pow1(x,N);
}

int main() {
    float x;
    int n;

    cout<<"Enter the Number: ";
    cin>>x;

    cout<<"Enter the power: ";
    cin>>n;

    double res = Pow(x,n);

    cout<< x <<" raised to"<< n << " is: "<< res << endl;
    
    return 0;
}
/*
Since n is an int, it can overflow when negated (e.g., for INT_MIN = -2³¹).
Using long long prevents overflow issues

If exponent is negative, 
So the code takes reciprocal of x and flips sign of N.

For even exponents, 
𝑥^𝑁=(𝑥^2)^(𝑁/2)
Example: 
2^8=(2^2)^4=(4^4)
This reduces the problem size by half each time

For odd exponents, 
𝑥^𝑁=𝑥×𝑥^𝑁−1
Example: 
2^5=2×2^4.
*/