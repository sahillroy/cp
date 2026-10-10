// Problem: Speed Limit Test Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        float a, x, b, y;
        cin >> a >> x >> b >> y;

        float alice_speed = a / x;
        float bob_speed = b / y;

        if (alice_speed > bob_speed) {
            cout << "ALICE\n";
        } else if (bob_speed > alice_speed) {
            cout << "BOB\n";
        } else {
            cout << "EQUAL\n";
        }
    }

    return 0;
}