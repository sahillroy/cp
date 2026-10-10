// Problem: Cyclic Quadrilateral Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // A quadrilateral is cyclic if opposite angles sum to 180 degrees
        if (a + c == 180 && b + d == 180) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}