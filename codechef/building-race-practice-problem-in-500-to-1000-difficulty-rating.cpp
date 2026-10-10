// Problem: Building Race Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BUILDINGRACE

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        float a, b, x, y;
        cin >> a >> b >> x >> y;
 
        float chef_time = a / x;
        float chefina_time = b / y;

        if (chef_time < chefina_time) {
            cout << "Chef\n";
        } else if (chefina_time < chef_time) {
            cout << "Chefina\n";
        } else {
            cout << "Both\n";
        }
    }

    return 0;
}