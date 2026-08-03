// Problem: CSES
// Link: https://cses.fi/problemset/result/18205023/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    const int INF = 1e9;
    vector<int> dp(target + 1, INF);

    dp[0] = 0;

    for (int i = 1; i <= target; i++) {
        for (int coin : coins) {
            if (i >= coin) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    if (dp[target] == INF)
        cout << -1 << '\n';
    else
        cout << dp[target] << '\n';
}