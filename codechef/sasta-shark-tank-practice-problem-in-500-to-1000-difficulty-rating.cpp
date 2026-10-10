// Problem: Sasta Shark Tank Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int val1 = a * 10;
        int val2 = b * 5;

        if (val1 > val2) {
            cout << "FIRST\n";
        } else if (val2 > val1) {
            cout << "SECOND\n";
        } else {
            cout << "ANY\n";
        }
    }
    return 0;
}