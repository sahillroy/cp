#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    bool res = (n!=0 && (n & (n-1)) == 0);

    if(res) {
        cout<<"It is Power of 2.";
    }
    else{
        cout<<"It is not a Power of 2.";
    }
    
    return 0;
}
/*
he bitwise AND (&) operation produces 1 only if both corresponding bits are 1.
For a power of 2:
The original number has one 1
The number (n - 1) has 1s everywhere except that position
Therefore, no bit position has 1 in both numbers

Result:
𝑛 & (𝑛−1)=0
n&(n−1)=0

if it is power of 2 the AND operation of n and n-1 will always be 0
eg = 16 => 10000 and 15 = 01111 and its AND will always give 0 
*/