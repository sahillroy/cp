#include <bits/stdc++.h>
using namespace std;

const long MOD = 1e9 + 7;

// Function to compute (base^expo) % MOD using fast exponentiation
long long fastPower(long long base, long long expo, long long mod) {
    long long result = 1;
    while (expo > 0) {
        if (expo % 2 == 1) { // If exponent is odd
            result = (result * base) % mod;
            expo -= 1;
        } else { // If exponent is even
            base = (base * base) % mod;
            expo /= 2;
        }
    }
    return result;
}

// Function to count good numbers of length n
int countGoodNumbers(long long n) {
    if (n == 1) return 5; // Only one digit → 5 choices
    long long evenPositions = (n + 1) / 2; // 0,2,4,...
    long long oddPositions = n / 2;        // 1,3,5,...
    return (int)((fastPower(5, evenPositions, MOD) * fastPower(4, oddPositions, MOD)) % MOD);
}

// Main function to test
int main() {
    long long n;
    cout << "Enter the length of number n: ";
    cin >> n;

    int totalGoodNumbers = countGoodNumbers(n);
    cout << "Total good numbers of length " << n << " = " << totalGoodNumbers << endl;

    return 0;
}

/*
Condition of Good Number
Even indices → digits {0, 2, 4, 6, 8} → 5 choices
Odd indices → digits {2, 3, 5, 7} → 4 choices

Total=(5^even×4^odd)mod(10^9+7) here mod is used to avoid overflow(condition in Q) where
even = (n + 1) / 2
odd = n / 2

helper(base, expo, mod) → calculates (base^expo) % mod
using fast (binary) exponentiation
If expo is even: square base, divide expo by 2
If expo is odd: multiply result by base, decrease expo by 1 (Same like pow)
*/