// Problem: Check if Permutation is Substring
// Link: https://www.geeksforgeeks.org/problems/check-if-permutation-is-substring/1

class Solution {
public:
    bool search(string &txt, string &pat) {
        int n = txt.size();
        int m = pat.size();
        
        if (m > n) return false;

        vector<int> patFreq(26, 0);
        vector<int> winFreq(26, 0);

      
        for (int i = 0; i < m; i++) {
            patFreq[pat[i] - 'a']++;
            winFreq[txt[i] - 'a']++;
        }

    
        for (int i = m; i < n; i++) {
            if (patFreq == winFreq) return true;

        
            winFreq[txt[i] - 'a']++;

            winFreq[txt[i - m] - 'a']--;
        }

        return patFreq == winFreq;
    }
};