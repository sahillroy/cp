// Problem: Chef and Races Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        int medals = 0;
        if (x != a && x != b) {
            medals++;
        }
        if (y != a && y != b) {
            medals++;
        }

        cout << medals << "\n";
    }

    return 0;
}