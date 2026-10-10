// Problem: Bus Seat Numbering Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SEATNUMBER

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n >= 1 && n <= 10) {
            cout << "Lower Double\n";
        } else if (n >= 11 && n <= 15) {
            cout << "Lower Single\n";
        } else if (n >= 16 && n <= 25) {
            cout << "Upper Double\n";
        } else if (n >= 26 && n <= 30) {
            cout << "Upper Single\n";
        }
    }
    return 0;
}