// Problem: Monopoly Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p, q, r, s;
        cin >> p >> q >> r >> s;

        if (p > q + r + s || q > p + r + s || r > p + q + s || s > p + q + r) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}