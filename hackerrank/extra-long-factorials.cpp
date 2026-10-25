// Problem: Extra Long Factorials
// Link: https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
    vector<int> res;
    res.push_back(1); // 0! or 1! starts at 1

    for (int i = 2; i <= n; i++) {
        int carry = 0;
        
        // Multiply 'i' with every digit in 'res'
        for (int j = 0; j < res.size(); j++) {
            int prod = res[j] * i + carry;
            res[j] = prod % 10;  // Keep the last digit
            carry = prod / 10;   // Carry the rest
        }
        
        // Push remaining carry digits
        while (carry > 0) {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Print the digits in reverse order
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
