// Problem: Mario and Transformation Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x % 3 == 0) {
            cout << "NORMAL\n";
        } else if (x % 3 == 1) {
            cout << "HUGE\n";
        } else {
            cout << "SMALL\n";
        }
    }
    return 0;
}