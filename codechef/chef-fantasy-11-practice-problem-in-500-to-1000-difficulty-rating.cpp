// Problem: Chef Fantasy 11 Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FIZZBUZZ2303

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Number of ways to choose captain and vice-captain is N * (N - 1)
        cout << n * (n - 1) << "\n";
    }

    return 0;
}