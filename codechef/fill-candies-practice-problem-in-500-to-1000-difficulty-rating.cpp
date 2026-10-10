// Problem: Fill Candies Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k, m;
        cin >> n >> k >> m;
        
        int capacity_per_bag = k * m;
        
        // Ceiling division to calculate minimum bags needed
        cout << (n + capacity_per_bag - 1) / capacity_per_bag << "\n";
    }
    return 0;
}