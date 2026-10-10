// Problem: Air Conditioner Temperature Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
            if (d >= 1000) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}