// Problem: Is Subsequence
// Link: https://leetcode.com/problems/is-subsequence/submissions/2156288941/

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int l=0;
        int r=0;

        while(l<s.length() && r<t.length()){
            if(s[l] == t[r]){
                l++;
            }
            r++;
        }
        return l == s.size();
    }
};