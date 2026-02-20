#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '{' || c == '[' || c == '(') {
                st.push(c);
            } 
            else {
                if (st.empty() ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[') ||
                    (c == ')' && st.top() != '(')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    MyStack obj;
    string s;

    cout << "Enter brackets string: ";
    cin >> s;

    if (obj.isValid(s))
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}

/*
Here we want to tell whether string has valid parenthesis i.e if parenthesis is open, It should be closed properly
so for this we are using stack first we are insterting each char from string into stack and checking condition
1. if it is opening parenthesis we are pushing it int stack
2. if it closed parenthesis we are checking in stack whether it is empty or if char is '}' so st.top is '{' and for all parenthesis type
if it is satisfying we are popping it out otherwise changing bool to false i.e. parenthesis is invalid
*/