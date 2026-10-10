// Problem: Dracula Eats Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n >= 2) {
            cout << (n - 2) / 7 + 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}