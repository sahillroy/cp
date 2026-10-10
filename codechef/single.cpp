// Problem: Single
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, x, y;
        cin >> h >> x >> y;

        int rem_health = h - y;
        int attacks = 1;

        if (rem_health > 0) {
            attacks += (rem_health + x - 1) / x;
        }

        cout << attacks << "\n";
    }

    return 0;
}