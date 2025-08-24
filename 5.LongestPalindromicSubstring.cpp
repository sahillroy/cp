#include <bits/stdc++.h>
using namespace std;

    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 1) return s;

        int bestLeft = 0, bestRight = 1; // longest palindrome indices
        int left = 0, right = 1;         // expansion pointers
        int backupLeft, backupRight;     // to reset after expansion

        while (right < n) {
            backupLeft = left;
            backupRight = right;

            // Expand around the current center
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }

            // Update if longer palindrome found
            if (bestRight - bestLeft < right - left) {
                bestLeft = left;
                bestRight = right;
            }

            // Odd-length case
            if (backupLeft == backupRight) {
                right = backupRight + 1;
                left = backupLeft;
                continue;
            }

            // Even-length case
            right = backupRight;
            left = backupLeft + 1;
        }

        // Extract longest palindrome substring
        return s.substr(bestLeft + 1, bestRight - bestLeft - 1);
    }

int main() {
    string s;

    cout<<"Enter the String: ";
    cin>>s;

    string res = longestPalindrome(s);

    cout << "Longest Palindromic Substring: " << res << endl;
    return 0;
}
/*
Pick a center in the string (like pointing your finger between letters or on a letter).
Example: In "babad", first center is between 'b' and 'a' (index 0 and 1).
Later, it also tries 'a' itself as a center (index 1,1).
Expand outwards from that center to the left and right as long as letters are equal.
For 'a' at index 1 → left side is 'b', right side is 'b', they match → "bab".
Keep track of the longest palindrome found so far.
At first, the longest is just "b".
After expansion around index 1, it becomes "bab".
Around index 2, it finds "aba".
Move to the next center and repeat.
At the end, return the longest substring found.

You stand in the middle of the string and spread your arms out to left and right.
If the letters your arms touch are the same → keep stretching out.
Stop when letters don’t match.
The longest “stretch” you make is a palindrome.
Try this from every possible middle point and pick the biggest one.
*/