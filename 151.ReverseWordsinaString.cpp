#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    reverse(s.begin(), s.end());
    string ans = "";
    int i = 0;
    int n = s.length();
    
    while (i < n) {
        // Skip spaces
        while (i < n && s[i] == ' ') i++;

        string word = "";
        // Collect a word
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        // Reverse the word back to normal and append
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!ans.empty()) ans += " ";
            ans += word;
        }
    }
    return ans;
}

int main() {
    string s;

    cout << "Enter the String: ";
    getline(cin, s);  //reads full line with spaces

    string res = reverseWords(s);

    cout << "The string of the words in reverse order is: " << res << endl;
    return 0;
}

/*
here we ant to reverse the sentence so first we are reversing the string completely and then initializing an resultant string ans for storing
the reversed string 
now we are using a while loop and initializing a new string temp for storing each word of the sentence unless we are encountering a space
we are adding the letters in the word string and then we are reversing this word to get the word back and then adding it to the ans string with
spaces
*/