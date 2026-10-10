// Problem: Recent contest problems Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int start38 = 0, ltime108 = 0;
        for (int i = 0; i < n; i++) {
            string code;
            cin >> code;
            if (code == "START38") {
                start38++;
            } else if (code == "LTIME108") {
                ltime108++;
            }
        }

        cout << start38 << " " << ltime108 << "\n";
    }

    return 0;
}