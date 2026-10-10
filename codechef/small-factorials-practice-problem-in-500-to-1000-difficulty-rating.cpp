// Problem: Small factorials Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FCTRL2

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(200, 0);
    a[0] = 1;
    int m = 1; // Number of digits

    for (int i = 1; i <= n; i++) {
        int temp = 0;
        for (int j = 0; j < m; j++) {
            int x = a[j] * i + temp;
            a[j] = x % 10;
            temp = x / 10;
        }
        while (temp > 0) {
            a[m] = temp % 10;
            temp /= 10;
            m++;
        }
    }

    for (int i = m - 1; i >= 0; i--) {
        cout << a[i];
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}