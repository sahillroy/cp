// Problem: The Lead Game Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cum1 = 0, cum2 = 0;
    int max_lead = 0, winner = 1;

    for (int i = 0; i < n; i++) {
        int s1, s2;
        cin >> s1 >> s2;

        cum1 += s1;
        cum2 += s2;

        int current_lead = abs(cum1 - cum2);
        int current_leader = (cum1 > cum2) ? 1 : 2;

        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    cout << winner << " " << max_lead << "\n";

    return 0;
}