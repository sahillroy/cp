// Problem: Elections in Chefland Practice Problem in 500 to 1000 difficulty problems
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int age;
            cin >> age;
            if (age >= x) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}