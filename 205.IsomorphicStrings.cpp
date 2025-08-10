#include <bits/stdc++.h>
using namespace std;

bool isomorphicStrings(string s, string t) {
        unordered_map<char,char> mpp1;
        unordered_map<char,char> mpp2;

        for(int i = 0; i < s.size(); i++) {//mapping first string with second 
            mpp1[s[i]] = t[i];
        }
        for(int i = 0; i < t.size(); i++) {// mapping second string with first
            mpp2[t[i]] = s[i];
        }

        for(int i = 0; i < t.size(); i++) {//checking if the hasmaps are same
            if(t[i] != mpp1[s[i]] || s[i] != mpp2[t[i]]) {
                return false;
            }
        }
        return true;
    }

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    bool res = isomorphicStrings(s,t);
    if(res) {
        cout << "Strings are isomorphic.\n";
    } else {
        cout << "Strings are not isomorphic.\n";
    }

    return 0;
}

/*
Two hash maps (mpp1 and mpp2)

mpp1 maps characters from s → t

mpp2 maps characters from t → s

First two loops

Store the character mappings in both directions.

Final loop (checking)

For every position i, check if:

The mapping from s[i] matches t[i] (forward check)

The mapping from t[i] matches s[i] (reverse check)

If any mismatch is found → return false.

If all positions pass the check → return true.

Your code works by creating two hash maps to store a one-to-one mapping between characters of the first string s and the second string t in 
both directions. First, it maps each character from s to t, and then from t to s. After building these mappings, it checks each position to 
ensure the mapping is consistent both ways — meaning no two characters from one string map to the same character in the other.
*/
