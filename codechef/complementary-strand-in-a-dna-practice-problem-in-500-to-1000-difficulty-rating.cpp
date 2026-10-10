// Problem: Complementary Strand in a DNA Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DNASTRAND

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') s[i] = 'T';
            else if (s[i] == 'T') s[i] = 'A';
            else if (s[i] == 'C') s[i] = 'G';
            else if (s[i] == 'G') s[i] = 'C';
        }
        
        cout << s << "\n";
    }
    return 0;
}