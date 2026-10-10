// Problem: Bath in Winters Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BATH

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        // One person requires 2 * Y litres of water
        int water_per_person = 2 * y;
        
        cout << x / water_per_person << "\n";
    }
    return 0;
}