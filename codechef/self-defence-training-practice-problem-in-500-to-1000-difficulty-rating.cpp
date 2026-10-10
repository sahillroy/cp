// Problem: Self Defence Training Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            int age;
            cin >> age;
            if (age >= 10 && age <= 60) {
                count++;
            }
        }
        
        cout << count << "\n";
    }

    return 0;
}