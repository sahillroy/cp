// Problem: Nearest Exit Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x <= 50) {
            cout << "LEFT\n";
        } else {
            cout << "RIGHT\n";
        }
    }
    return 0;
}