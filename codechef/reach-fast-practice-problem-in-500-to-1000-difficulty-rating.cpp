// Problem: Reach fast Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;

        int dist = abs(a - b);
        int steps = (dist + k - 1) / k;

        cout << steps << "\n";
    }

    return 0;
}