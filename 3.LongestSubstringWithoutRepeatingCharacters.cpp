#include <bits/stdc++.h>
using namespace std;

int LongestSubstringWithoutRepeatingCharacters(string s) {
    vector<int> hash(256, -1);
        int left=0,right=0,maxl=0;

        int n = s.length();

        while(right<n){
            if(hash[s[right]] != -1){
                if(hash[s[right]]>= left){
                    left = hash[s[right]]+1;
                }
            }
            int len = right-left+1;
            maxl = max(maxl,len);
            hash[s[right]] = right;
            right++;
        }
        return maxl;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int res = LongestSubstringWithoutRepeatingCharacters(s);
    cout << "Length of the longest substring without repeating characters is: " << res << endl;
    return 0;
}

/*
In this code, we define a function `LongestSubstringWithoutRepeatingCharacters` that takes a string `s` as input and returns the 
length of the longest substring without repeating characters. We use a vector `hash` to keep track of the last index of each 
character in the string. The two-pointer technique is employed to maintain a sliding window of characters, updating the left 
pointer when a repeating character is encountered. The main function reads a string from the user, calls the function, and 
prints the result.
*/