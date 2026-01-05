#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();

        // Convert dictionary to set for fast lookup
        unordered_set<string> dict(wordDict.begin(), wordDict.end());

        // dp[i] = true if s[0..i-1] can be segmented
        vector<bool> dp(n + 1, false);
        dp[0] = true;  // empty string

        // i = destination
        for (int i = 1; i <= n; i++) {

            // j = source
            for (int j = 0; j < i; j++) {

                // check two conditions
                if (dp[j] && dict.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break;  // no need to check more j
                }
            }
        }

        return dp[n];
    }
};

int main() {
    Solution obj;

    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};

    if (obj.wordBreak(s, wordDict)) {
        cout << "True: The string can be segmented." << endl;
    } else {
        cout << "False: The string cannot be segmented." << endl;
    }

    return 0;
}
/* 
Outer loop i checks prefixes:
i = 1 → "l"
i = 2 → "le"
i = 3 → "lee"
i = 4 → "leet"
“here it found a dict word”
At i = 4, "leet" is in the dictionary.

“initially j is at 0 so we can jump from j = 0 to i = 4”
Because:
dp[0] == true
s[0..3] = "leet" is a word

So:
dp[4] = true;
This means: “I can reach index 4” 

j means:
“From which earlier position can I jump to i?”
You are testing all possible cut points.

if (dp[j] && dict.count(s.substr(j, i - j)))

Part 1️
dp[j] == true
“I already know the string from 0 to j-1 is valid.”

Part 2️
s.substr(j, i - j)
“The piece from index j to index i-1”

Imagine stepping stones:
j = stone you stand on
i = stone you want to jump to
Jump is allowed only if:
You can stand on j (dp[j] == true)
Jump distance forms a word
If you can reach the last stone → success.
*/