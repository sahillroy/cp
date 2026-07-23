// Problem: For Loop
// Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Array to map 1..9 to their English word representations
    vector<string> words = {
        "", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };

    // The range [a, b] is inclusive, so we use i <= b
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << words[i] << endl;
        } else {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}