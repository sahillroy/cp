// Problem: Too many Floors Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Calculate floor number for room X and room Y
        int floor_x = (x + 9) / 10;
        int floor_y = (y + 9) / 10;

        // Output absolute difference in floor numbers
        cout << abs(floor_x - floor_y) << "\n";
    }

    return 0;
}