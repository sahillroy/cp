// Problem: The Last Levels Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        
        int total_play_time = x * y;
        
        // Calculate number of breaks taken (after every 3 levels, excluding the end of the game)
        int breaks = (x - 1) / 3;
        int total_break_time = breaks * z;
        
        cout << total_play_time + total_break_time << "\n";
    }
    return 0;
}