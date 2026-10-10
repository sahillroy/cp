// Problem: Chef and his Apps Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s, x, y, z;
        cin >> s >> x >> y >> z;

        int unused_memory = s - (x + y);

       
        if (unused_memory >= z) {
            cout << 0 << "\n";
        }
       
        else if (unused_memory + max(x, y) >= z) {
            cout << 1 << "\n";
        }
        
        else {
            cout << 2 << "\n";
        }
    }

    return 0;
}