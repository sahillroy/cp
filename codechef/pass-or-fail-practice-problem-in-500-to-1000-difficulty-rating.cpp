// Problem: Pass or Fail Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, p;
        cin >> n >> x >> p;

        int correct_marks = x * 3;
        int incorrect_marks = (n - x) * 1;
        int total_score = correct_marks - incorrect_marks;

        if (total_score >= p) {
            cout << "PASS\n";
        } else {
            cout << "FAIL\n";
        }
    }

    return 0;
}