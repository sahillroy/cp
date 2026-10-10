// Problem: Small Factorial Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW018

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }

        cout << fact << "\n";
    }

    return 0;
}