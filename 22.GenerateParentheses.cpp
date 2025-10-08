#include <bits/stdc++.h>
using namespace std;

void generateParentheses(int n, int open, int close, string curr, vector<string> &result) {
    // Base case: when we used all parentheses
    if (open == n && close == n) {
        result.push_back(curr);
        return;
    }

    // Add '(' if we still have some left to place
    if (open < n) {
        generateParentheses(n, open + 1, close, curr + "(", result);
    }

    // Add ')' if it won't make the string invalid
    if (close < open) {
        generateParentheses(n, open, close + 1, curr + ")", result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParentheses(n, 0, 0, "", result);
    return result;
}

int main() {
    int n;
    cout<<"Enter the Numer of Parenthesis: ";
    cin >> n;

    vector<string> ans = generateParenthesis(n);
    for (auto &s : ans) {
        cout << s << endl;
    }

    return 0;
}
/*
first we are taking two variales open for open brackets and close for close brackets if open == close == n that means it is valid parenthesis
and we will print that which is stored in curr temporarily and res stores all these valid parenthesis
first we are inserting '(' until open is less than n and then ')' until close is less than open 
a tree like recursion will be formed and with the help of backtracking we will get all the valid parenthesis
weare recursivley calling the function until open = n and close = open
*/