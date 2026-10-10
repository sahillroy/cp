// Problem: Binary Battles Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        int rounds = log2(n);
        long long total_time = (rounds * a) + ((rounds - 1) * b);

        cout << total_time << "\n";
    }

    return 0;
}