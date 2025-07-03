#include <bits/stdc++.h>
using namespace std;

char stringgame(int &k){
    string a = "a";//initially alice always has string a and string is always assigned in " " not ' ' 
    while(a.size()<k){//unless string size is greater than k it will be incremented
        int n = a.size();//after every loop size is increasing so it is declared inside 
        for(int i=0 ; i<n ;i++){
            if(a[i] == 'z'){
                a.push_back('a');//condition in Q
            }
            else{
                a.push_back(a[i]+1);//condition in Q 
            }
        }
    }
    return a[k-1];//as a starts from 0
}

int main() {
    int k;

    cout << "Enter K: ";
    cin >> k;

    char res = stringgame(k); 

    cout << "The K-th Character in String Game is: " << res << endl;
    return 0;
}
// if we declared n above while loop we'll get TLE as agter each loop iteration size of string is increasing
//concept of Q for string
//Initially, word = "a". We need to do the operation three times:
// Generated string is "b", word becomes "ab".
// Generated string is "bc", word becomes "abbc".
// Generated string is "bccd", word becomes "abbcbccd".