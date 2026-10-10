// Problem: Water Mixing Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << "YES\n";
        } else if (a < b) {
            // Need to raise temperature by adding hot water (X)
            if (b - a <= x) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            // Need to lower temperature by adding cold water (Y)
            if (a - b <= y) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}