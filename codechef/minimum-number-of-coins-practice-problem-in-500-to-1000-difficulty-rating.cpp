// Problem: Minimum number of coins Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCOINS

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        // If X is not divisible by 5, it cannot be formed using Rs 5 and Rs 10 coins
        if (x % 5 != 0) {
            cout << -1 << "\n";
        } else {
            // Use maximum possible Rs 10 coins (x / 10)
            // If x ends in 5, one Rs 5 coin is needed (x % 10 / 5)
            cout << (x / 10) + ((x % 10) / 5) << "\n";
        }
    }

    return 0;
}