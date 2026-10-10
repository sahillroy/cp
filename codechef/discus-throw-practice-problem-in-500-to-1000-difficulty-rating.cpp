// Problem: Discus Throw Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DISCUS

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << max({a, b, c}) << "\n";
    }
    return 0;
}