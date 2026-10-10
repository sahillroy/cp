// Problem: Decrement OR Increment Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 4 == 0) {
        n++;
    } else {
        n--;
    }

    cout << n << "\n";

    return 0;
}