// Problem: The Cooler Dilemma 2 Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERCOOLER2

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        if (y % x == 0) {
            cout << (y / x) - 1 << "\n";
        } else {
            cout << y / x << "\n";
        }
    }

    return 0;
}