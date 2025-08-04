#include <bits/stdc++.h>
using namespace std;

string removeOuterParenthesis(string s) {
    string temp; // the resultant string after removing the outer parenthesis
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            if (count >= 1) {// count >=1 refers that the '(' is not outer parenthesis and is inner one so we can increment counter
                temp += s[i]; // this '(' is not outermost, so we add it
            }
            count++; // increase count for every '('
        } 
        else if (s[i] == ')') {
            count--; // decrease count first
            if (count >= 1) { // if count is greater than 1 that means it is not for outer parentesis so we are pushing in resultant  
                temp += s[i]; // this ')' is not outermost, so we add it
            }
        }
    }

    return temp;
}

int main() {
    string s;

    cout << "Enter the String: ";
    cin >> s;

    string res = removeOuterParenthesis(s);

    cout << "After removing outer parentheses of each part, the resultant string is: " << res << endl;
    return 0;
}



// the intuition is to keep a count of the parentheses, and for each '(', if the count is greater than 0, 
// we include it (because it's not the outermost). Then we increment the count.
// Similarly for each ')', we first decrement the count, and if the new count is greater than 0, we include it.
// This way, the outermost parentheses (those that make the count go from 0→1 and 1→0) are excluded.
