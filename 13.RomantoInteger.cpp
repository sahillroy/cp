#include <bits/stdc++.h>
using namespace std;

int RomantoInt(string s){
    unordered_map<char,int> roman = {
        {'I',1},{'V',5},{'X', 10},{'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int res=0;
    for(int i=0 ; i<s.length() ; i++){
        int curr = roman[s[i]];
        int next = (i + 1 < s.length()) ? roman[s[i+1]] : 0 ;

        if(curr < next){
            res -= curr;
        }
        else{
            res += curr;
        }
    }
    return res;
}

int main() {
    string s;

    cout<<"Enter the Roman Number: ";
    cin>>s;

    int res = RomantoInt(s);

    cout<<"The Integer value is : " << res << endl;
    return 0;
}
/*
Firstly we are initializing the total designated roman aplhabets with its value using a hashmap 

then we are traversing the string and adding the values of the alphabets to the result

but for some cases like IV IX 
While looping, compare the current symbol’s value with the next symbol’s value.
Condition
If current < next → subtract current.
Else → add current.
Why it works
"IV" = I (1) before V (5) → 1 < 5 → subtract → result = 5 − 1 = 4.
"VI" = V (5), I (1) → 5 > 1 → add both → result = 6.
*/