// Problem: CSES
// Link: https://cses.fi/problemset/result/18204681/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    const long long mod = 1e9 + 7;

    vector<long long> dp(n + 1, 0);

    dp[0] = 1;

    for (long long i = 1; i <= n; i++) {
        for (int dice = 1; dice <= 6; dice++) {
            if (i - dice >= 0) {
                dp[i] = (dp[i] + dp[i - dice]) % mod;
            }
        }
    }

    cout << dp[n] << '\n';
}