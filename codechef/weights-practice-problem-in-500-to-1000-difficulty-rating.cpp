// Problem: Weights Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WGHTS

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        
        if (w == x || w == y || w == z ||
            w == (x + y) || w == (y + z) || w == (x + z) ||
            w == (x + y + z)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}