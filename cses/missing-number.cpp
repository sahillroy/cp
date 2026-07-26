// Problem: Missing Number
// Link: https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long expected = 1LL * n * (n + 1) / 2;
    long long actual = 0;

    for (long long i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        actual += x;
    }

    cout << expected - actual;

    return 0;
}