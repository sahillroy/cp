// Problem: Chess Ratings Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        int diff = y - x;
        if (diff <= 0) {
            cout << 0 << "\n";
        } else {
            cout << (diff + 7) / 8 << "\n";
        }
    }
    return 0;
}