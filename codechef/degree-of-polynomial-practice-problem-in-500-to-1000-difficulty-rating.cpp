// Problem: Degree of Polynomial Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DPOLY

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int degree = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != 0) {
                degree = i;
                break;
            }
        }

        cout << degree << "\n";
    }

    return 0;
}