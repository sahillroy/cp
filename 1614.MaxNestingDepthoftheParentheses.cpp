#include <bits/stdc++.h>
using namespace std;

int maxdepth(string s){
    int count = 0;
    int maxcount = 0;//here we are not taking INT_MIN as valid parenthesis can't be -ve and the garbage value of INT_MIN is -2147483648

    for(int i=0 ; i<s.length() ; i++){
        if(s[i] == '('){
            count++;
            maxcount = max(count,maxcount);
        }

        if(s[i] == ')'){
            count--;
        }
    }
    return maxcount;
}

int main() {
    string s;
    
    cout<<"Enter the String: ";
    cin>>s;

    int res = maxdepth(s);

    cout<<"The nesting depth (i.e) maximum number of nested parentheses is: "<< res << endl;

    return 0;
}
/*
The nesting depth is the maximum number of nested parentheses. we have to return the nested parenthesis like for eg
Input: s = "(1+(2*3)+((8)/4))+1"
Output: 3 
As 8 is the element inside max nestd parenthesis (i.e) 3

first we are initializing 2 variables count(temprorary) and maxcount
Whenever we encounter a '(' we are incrementing the the count and checking whether it is high than maxcount and then updating it likewise
and when we encounter ')' we are decrementing it and at the end we are returning maxcount
*/