#include <bits/stdc++.h>
using namespace std;

int LongestRepeat(string s, int k) {
    int l=0,r=0,maxl=0,repeat=0;
    vector<int> count(26,0);

    while(r<s.size()){
        count[s[r]-'A']++;
        repeat = max(repeat,count[s[r]-'A']);

        if(r-l+1-repeat>k){
            count[s[l]-'A']--;
            l++;
        }
        int len = r-l+1;
        maxl = max(maxl,len);
        r++;
    }
    return maxl;
}

int main() {
    string s;
    int k;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the value of k: ";
    cin >> k;

    int res = LongestRepeat(s,k);
    cout << "The length of the longest substring that can be obtained by replacing at most " << k << " characters is: " << res << endl;
    
    return 0;
}

/*
In this program, we find the length of the longest substring that can be obtained by replacing at most k characters in 
the given string s.
The `LongestRepeat` function uses a sliding window approach with two pointers (l and r) to keep track of the current 
substring. We maintain a count of each character in the current window using a vector `count`. We also keep track of 
the maximum count of any character in the current window using the variable `repeat`. If the length of the current window
 minus the maximum count of any character exceeds k, it means we need to shrink the window from the left by moving the 
 left pointer (l) to the right and updating the count of the character at the left pointer. We calculate the length of 
 the current valid substring and update the maximum length found so far. Finally, we return the maximum length of the 
 substring that can be obtained by replacing at most k characters.
In the main function, we read the input string and the value of k from the user, call the `LongestRepeat` function, and 
print the result.

*/