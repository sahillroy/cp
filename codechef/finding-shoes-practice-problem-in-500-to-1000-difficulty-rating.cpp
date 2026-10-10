// Problem: Finding Shoes Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        // Need N right shoes and max(0, N - M) extra left shoes
        if (m >= n) {
            cout << n << "\n";
        } else {
            cout << n + (n - m) << "\n";
        }
    }
    return 0;
}