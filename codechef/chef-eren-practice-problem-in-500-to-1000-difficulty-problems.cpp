// Problem: Chef Eren Practice Problem in 500 to 1000 difficulty problems
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int even_count = n / 2;
        int odd_count = (n + 1) / 2;

        int total_duration = (even_count * a) + (odd_count * b);
        cout << total_duration << "\n";
    }

    return 0;
}