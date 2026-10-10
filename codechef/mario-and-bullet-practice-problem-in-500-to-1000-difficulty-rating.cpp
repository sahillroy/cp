// Problem: Mario and Bullet Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        
        int travel_time = y / x;
        int delay = z - travel_time;
        
        cout << max(0, delay) << "\n";
    }
    return 0;
}