// Problem: Blackjack Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int required = 21 - (a + b);
        
        if (required >= 1 && required <= 10) {
            cout << required << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}