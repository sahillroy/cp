// Problem: Is the Score Consistent Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;

        if (c >= a && d >= b) {
            cout << "POSSIBLE\n";
        } else {
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}