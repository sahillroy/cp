// Problem: Second Largest Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW017

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        // Sort the 3 elements in ascending order
        sort(a, a + 3);

        // The second element (index 1) will be the second largest
        cout << a[1] << "\n";
    }

    return 0;
}