// Problem: Too many items Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLYBAGS

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Ceiling division: (n + 9) / 10
        int polybags = (n + 9) / 10;
        
        cout << polybags << "\n";
    }

    return 0;
}