// Problem: Get Lowest Free Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALE

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;
        int min_val = min({a, b, c});
        cout << total - min_val << "\n";
    }
    return 0;
}