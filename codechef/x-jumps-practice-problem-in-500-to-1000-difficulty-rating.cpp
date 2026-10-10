// Problem: X Jumps Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/XJUMP

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        // Moves using Y steps + remaining 1-step moves
        cout << (x / y) + (x % y) << "\n";
    }
    return 0;
}