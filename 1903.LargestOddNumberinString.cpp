#include<bits/stdc++.h>
using namespace std;

string largestoddnum(string s){
    int n = s.size();

    for(int i=n-1; i>=0 ;i--){
            if((s[i] - '0') % 2 != 0){
                return s.substr(0 , i+1);
            }
        }
    return "";
}


int main() {
    string s;

    cout << "Enter the String: ";
    cin >> s;

    string res = largestoddnum(s);

    cout << "The largest-valued odd integer is: " << res << endl;
    return 0;
}
/*
int n = num.size();
Get the size of the string num.

for (int i = n - 1; i >= 0; i--)
Traverse from the end of the string towards the start.

if ((num[i] - '0') % 2 != 0)
Convert the character to digit. If it’s odd, this is the last odd digit from the right.

return num.substr(0, i + 1);
Return the substring from start to that odd digit (inclusive). This is the largest odd-numbered prefix.

If no odd digit is found → return an empty string "".
*/