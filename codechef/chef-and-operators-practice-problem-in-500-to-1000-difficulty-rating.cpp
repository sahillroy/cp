// Problem: Chef And Operators Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHOPRT

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a > b) {
            cout << ">\n";
        } else if (a < b) {
            cout << "<\n";
        } else {
            cout << "=\n";
        }
    }

    return 0;
}