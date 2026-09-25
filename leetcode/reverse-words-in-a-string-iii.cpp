// Problem: Reverse Words in a String III
// Link: https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        string a = "";
        string res = "";

        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] == ' ') {
                reverse(a.begin(), a.end());
                res += a;
                res += ' ';
                a = "";
            }
            else {
                a += s[i];
            }
        }

        // Last word
        reverse(a.begin(), a.end());
        res += a;

        return res;
    }
};
