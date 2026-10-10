// Problem: It is My Serve Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MYSERVE

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p, q;
        cin >> p >> q;

        int total_points = p + q;
        
        if ((total_points / 2) % 2 == 0) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }

    return 0;
}