// Problem: Airlines Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;

       
        int total_required = (n + 99) / 100;

    
        if (total_required > x) {
            cout << total_required - x << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}