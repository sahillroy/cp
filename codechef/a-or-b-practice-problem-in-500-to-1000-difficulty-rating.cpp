// Problem: A or B Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Order 1: Attempt A then B
        // A finished at x mins, B finished at (x + y) mins
        int score_A_first = (500 - x * 2) + (1000 - (x + y) * 4);

        // Order 2: Attempt B then A
        // B finished at y mins, A finished at (x + y) mins
        int score_B_first = (1000 - y * 4) + (500 - (x + y) * 2);

        cout << max(score_A_first, score_B_first) << "\n";
    }

    return 0;
}