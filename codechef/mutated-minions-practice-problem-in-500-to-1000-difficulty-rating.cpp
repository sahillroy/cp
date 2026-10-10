// Problem: Mutated Minions Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int count = 0;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            if ((val + k) % 7 == 0) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}