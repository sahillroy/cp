// Problem: Possible Victory Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH

#include <iostream>
using namespace std;

int main() {
    int r, o, c;
    cin >> r >> o >> c;

    int remaining_overs = 20 - o;
    int max_extra_runs = remaining_overs * 36;
    int max_possible_score = c + max_extra_runs;

    if (max_possible_score > r) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}