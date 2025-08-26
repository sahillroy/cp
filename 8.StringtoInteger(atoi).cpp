#include <bits/stdc++.h>
using namespace std;

int StringtoInt(string s){
    int sign = 1;
    int i=0 ;
    int n = s.size();
    int res=0;
    
    while(i<n && s[i] == ' '){ // used for ignoring white spaces
        i++;
    }

    if(i<n && (s[i] == '+' || s[i] == '-')){ // for understanding sign of int
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    while(i<n && isdigit(s[i])){

        int digit = s[i] - '0'; // it is convertinf string to int num by subtracting its ASCII value from 0 

        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && digit > 7)) { // checking for extreme condition
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

        res = res * 10 + digit; // making number(combining digits)
        i++;
    }

    return (int)(res * sign);
}

int main() {

    string s;

    cout<<"Enter the String: ";
    cin>>s;
    
    int res = StringtoInt(s);

    cout<<"The converted Integer of String is: "<< res << endl;
    return 0;
}
/*
1.This part checks if adding the next digit will make the number too big or too small for an int.
If yes → it stops early and returns the largest/smallest int value allowed.
result > INT_MAX / 10
If result is already bigger than 214748364 (INT_MAX / 10), then multiplying by 10 and adding the next digit will definitely overflow.
Example: if result = 300000000, then result * 10 is already > 2,147,483,647.

2. (result == INT_MAX / 10 && digit > 7)
If result is exactly 214748364, then the only safe digit we can add is ≤ 7.
If digit > 7, the final number would exceed 2147483647.
Example: "2147483648" would break here.

at the end it is returning INT_MAX or MIN depending on sign
*/