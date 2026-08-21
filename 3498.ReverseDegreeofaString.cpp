#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int n = s.length();
    long long sum = 0;
    for(int i=0 ; i<n ; i++){
        int val = 'z'-s[i]+1;
        sum += (i+1)*val;
    }
    cout << "The reverse degree of the string is: " << sum << endl;
    
    return 0;
}