// Problem: Candy Distribution Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        // Each friend must get an equal and even number of candies.
        // So total candies N must be divisible by M, and (N / M) must be even.
        if (n % m == 0 && (n / m) % 2 == 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}