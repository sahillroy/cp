// Problem: Air Conditioner Temperature Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a <= b && c <= b) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}