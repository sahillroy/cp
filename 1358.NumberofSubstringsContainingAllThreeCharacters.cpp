#include <bits/stdc++.h>
using namespace std;
    
int NumOfSubstrings(const string& s) {
    // Implementation for counting substrings containing all three characters
    unordered_map<char,int> mpp = {{'a',0}, {'b',0}, {'c',0}};
    int l=0,res=0;
    for(int r=0;r<s.size();r++){
        mpp[s[r]]++;
        while(mpp['a']>0 && mpp['b']>0 && mpp['c']>0){
            res += s.size() - r;
            mpp[s[l]]--;
            l++;
        }
    }
    return res;
}

int main() {
    string s;
    cout<<"Enter the string: ";  
    cin>>s;

    int res = NumOfSubstrings(s);
    cout<<"Number of substrings containing all three characters: "<<res<<endl;

    return 0;
}

/*
In this Question, we are counting the number of substrings in the given string `s` that contain all three characters 'a', 'b', and 
'c'. We use a sliding window approach with two pointers, `l` and `r`, to represent the current window of substrings. We maintain a 
frequency map `mpp` to count the occurrences of each character in the current window. As we expand the right pointer `r`, we update
the frequency map. When all three characters are present in the current window (i.e., their counts are greater than 0), we calculate
the number of valid substrings that can be formed by extending the right pointer to the end of the string. We then shrink the 
window from the left by moving the `l` pointer to the right and updating the frequency map accordingly until one of the characters 
is no longer present in the window. This process continues until we have processed all characters in the string. Finally, we return 
the total count of valid substrings.
*/