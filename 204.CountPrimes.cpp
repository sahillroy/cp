#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    cout<<"Enter the Number: ";
    cin>>n;

    if(n<=2) return 0; //smallest prime is 2

    vector<int>isprime(n,true);
    isprime[0]=isprime[1]=false;

    for(int i=2 ; i*i<n ; i++){
        if(isprime[i]){
            for(int j=i*i ; j<n ; j+=i){
                isprime[j]=false;
            }
        }
    }

    int cnt=0;
    for(int i=0 ; i<n; i++){
        if(isprime[i]){
            cnt++;
        }
    }

    cout<<"The total number of prime number between 1 to "<<n<<" are: "<<cnt<<endl;
    return 0;
}
/*
Assume all numbers are prime initially
Start from the smallest prime (2)
Mark all multiples of 2 as not prime
Move to next unmarked number (3)
Mark all multiples of 3
Repeat until √n

To count primes less than n, we assume all numbers from 0 to n−1 are prime and then eliminate the ones that are not. Since 0 and 1 are not 
prime, we mark them false. We then iterate from 2 up to √n; whenever we find a number still marked as prime, we mark all its multiples 
(starting from its square) as non-prime because multiples cannot be prime. After this elimination process, the numbers that remain marked 
as prime are counted, and that count is the answer.
*/