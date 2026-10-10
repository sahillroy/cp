// Problem: Cup Finals Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, d;
        cin >> x >> y >> d;

        if (abs(x - y) <= d) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}