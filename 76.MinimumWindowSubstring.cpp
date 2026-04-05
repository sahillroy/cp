#include <bits/stdc++.h>
using namespace std;

string MinWindow(string s,string t){
    vector<int> freq(128, 0); // it stores the needed char

        // Store required characters
        for (char c : t) {
            freq[c]++;
        }

        int l = 0; //stores left boundary of the current window
        int r = 0;
        int count = t.size(); // total characters needed

        int minLen = INT_MAX; // min length that we currently have
        int start = 0; //stores the left boundary of minimum valid window

        while (r < s.size()) {
            // I will traverse through code and checkIf current char is needed,
            // decrease count
            if (freq[s[r]] > 0) {
                count--;
            }

            freq[s[r]]--; // include character in window 
            r++;

            // When all characters are matched
            while (count == 0) {
                // Update minimum window
                if (r - l < minLen) {
                    minLen = r - l;
                    start = l;
                }

                freq[s[l]]++;// Try to remove left character and add it to still needed section

                // If removing makes window invalid
                if (freq[s[l]] > 0) {
                    count++;
                }
                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
}
int main() {
    string s, t;
    cout << "Enter the string S: ";
    cin >> s;
    cout << "Enter the string T: ";
    cin >> t;

    string res = MinWindow(s, t);
    if (res.empty()) {
        cout << "No valid window found." << endl;
    } else {
        cout << "Minimum window substring: " << res << endl;
    }
    return 0;
}

/*
In this code, we use a sliding window approach to find the minimum window substring in string S that contains all characters of 
string T. We maintain a frequency array to keep track of the characters needed from T and a count variable to track how many 
characters are still needed. As we expand the right pointer of the window, we check if the current character is needed and update 
our count accordingly. When we have a valid window (count == 0), we try to shrink it from the left to find the minimum length. 
Finally, we return the minimum window substring found or an empty string if no valid window exists.


*/