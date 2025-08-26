#include <bits/stdc++.h>
using namespace std;

    int beautySum(string s) {
        int beautysum = 0;
        unordered_map<char,int> mp;
    
        for(int i=0; i<s.size(); i++){
            mp.clear(); // imp as for new substring the map should be cleared
            for(int j=i; j<s.size(); j++){
                char &ch = s[j];
                mp[ch]++;
                
                int maxi = INT_MIN;
                int mini = INT_MAX;
                
                for(auto each: mp){
                    maxi = max(maxi, each.second);
                    mini = min(mini, each.second);
                }
                
                int beauty = maxi - mini;
                beautysum += beauty;
            }
        }
        return beautysum;
    }


int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = beautySum(s);
    cout << "Beauty sum of all substrings: " << result << endl;

    return 0;
}

/*
Pick all substrings
Outer loop → picks starting position i.
Inner loop → picks ending position j.
So together they generate every substring s[i..j].
Count frequencies of characters
Uses unordered_map (mp) to store how many times each character appears in the substring.
Find max and min frequency
Go through the map:
maxi = highest frequency (the most repeated letter).
mini = lowest frequency (the least repeated letter, but still present).
Calculate beauty
beauty = maxi - mini.
Add this to beautysum.
Do it for all substrings
Continue until every substring has been checked.
Finally return the sum.
*/
