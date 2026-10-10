// Problem: Test Score Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        
        if (y % x == 0 && y <= n * x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}