#include <bits/stdc++.h>
using namespace std;

// Function declaration
void backtrack(const string& digits, int idx, string comb, vector<string>& res, const unordered_map<char, string>& digitToLetters);

vector<string> letterCombinations(string digits) {
    vector<string> res;
        
    if (digits.empty()) {
        return res;
    }
        
    unordered_map<char, string> digitToLetters = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
        
    backtrack(digits, 0, "", res, digitToLetters);
    return res;        
}

void backtrack(const string& digits, int idx, string comb, vector<string>& res, const unordered_map<char, string>& digitToLetters) {
    if (idx == digits.length()) {
        res.push_back(comb);
        return;
    }
        
    string letters = digitToLetters.at(digits[idx]);
    for (char letter : letters) {
        backtrack(digits, idx + 1, comb + letter, res, digitToLetters);
    }
}    

int main() {
    string digits;
    cout << "Enter the Digits: ";
    cin >> digits;

    vector<string> res = letterCombinations(digits);

    cout << "Letter Combinations:\n";
    for (const string& s : res) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

/*
Create a dictionary digit_to_letters that maps each digit from '2' to '9' to the corresponding letters on a phone keypad.

Define a recursive function backtrack(idx, comb) that takes two parameters:

idx: The current index of the digit being processed in the digits string.
comb: The current combination being formed by appending letters.
Inside the backtrack function:

Check if idx is equal to the length of the digits string. If it is, it means a valid combination has been formed, so append the current comb to the res list.
If not, iterate through each letter corresponding to the digit at digits[idx] using the digit_to_letters dictionary.
For each letter, recursively call backtrack with idx + 1 to process the next digit and comb + letter to add the current letter to the combination.
Initialize the res list.

Start the initial call to backtrack with idx set to 0 and an empty string as comb. This will start the process of generating combinations.

After the recursive calls have been made, return the res list containing all the generated combinations.
*/