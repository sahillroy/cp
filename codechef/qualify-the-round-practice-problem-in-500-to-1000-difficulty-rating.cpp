// Problem: Qualify the round Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, a, b;
        cin >> x >> a >> b;

        int score = a * 1 + b * 2;

        if (score >= x) {
            cout << "Qualify\n";
        } else {
            cout << "NotQualify\n";
        }
    }
    return 0;
}