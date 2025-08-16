#include <bits/stdc++.h>
using namespace std;

int max69num(int &n){
    string s = to_string(n);

    for(int i=0 ; i<s.length() ; i++){
        if(s[i] == '6'){
            s[i] = '9';
            break;
        }
    }
    int ans = stoi(s);
    return ans;
}

int main() {
    int n;

    cout<<"Enter the Number consisting of 6 and 9: ";
    cin>>n;

    int res = max69num(n);

    cout<<"The maximum number is: " << res << endl; 
    return 0;
}
/*
We have to return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6)

Firstly we are converting it into string and then iterating and changing the first 6 encountering through loop as we want max num
and at the end we are converting it back to integer and returning
*/