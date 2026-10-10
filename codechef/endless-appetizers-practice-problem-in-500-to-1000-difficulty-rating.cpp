// Problem: Endless Appetizers Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, r;
        cin >> x >> y >> r;

        int extra_sticks = r / 30;
        int total_sticks = x + extra_sticks;

        int plates = (total_sticks + y - 1) / y;

        cout << plates << "\n";
    }

    return 0;
}