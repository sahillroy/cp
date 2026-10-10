// Problem: Minimum number of Flips Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            sum += val;
        }

        if (n % 2 != 0) {
            cout << -1 << "\n";
        } else {
            cout << abs(sum) / 2 << "\n";
        }
    }

    return 0;
}