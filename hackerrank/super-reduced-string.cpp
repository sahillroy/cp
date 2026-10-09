// Problem: Super Reduced String
// Link: https://www.hackerrank.com/challenges/reduced-string/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    string result = "";
    
    for (char c : s) {
        // If the last character added matches the current character, remove it
        if (!result.empty() && result.back() == c) {
            result.pop_back();
        } else {
            // Otherwise, add the character
            result.push_back(c);
        }
    }
    
    return result.empty() ? "Empty String" : result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
