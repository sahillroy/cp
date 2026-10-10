// Problem: Best of Two Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        int alice_score = a1 + a2 + a3 - min({a1, a2, a3});
        int bob_score = b1 + b2 + b3 - min({b1, b2, b3});

        if (alice_score > bob_score) {
            cout << "Alice\n";
        } else if (bob_score > alice_score) {
            cout << "Bob\n";
        } else {
            cout << "Tie\n";
        }
    }

    return 0;
}