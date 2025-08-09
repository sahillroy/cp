#include <bits/stdc++.h>
using namespace std;

string commonprefix(vector<string> s){
   string ans = "";// if vector<string> ans is used , "" is not required

    string first = s[0]; //storing first string of the array of strings in a variable so that it can be compared with rest
    bool flag = true;

    for(int i=0 ; i<first.size() ; i++){// this loop is for comparing each alpahabet of first string with rest of the strings 
        for(int j=0 ; j<s.size() ; j++){// this loop is for comparing rest of the strings with first string
            if(s[0][i] != s[j][i]){// s[0][i] means first string(0) and alphabets(i) is compared with s[j][i] rest of string(j)and their alphabets(i) 
                flag = false;
                break;
            }
        }
        if(flag){//checking whether all strings matched at the current character position
            ans += s[0][i];// adding the char to the resultant string
        }

    }
    return ans;

}

int main() {
    int n;
    vector<string> s;

    cout<<"Enter the numer of Strings: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        s.push_back(x);
    }

    string res = commonprefix(s);

    cout<< "The Longest common prefix string amongst an array of strings is: "<< res << endl;

    return 0;
}

/*
In Q condition is given if no char is common then return "".

here we are initializing the first string from the string of arrays into a variable string first and a flag set to true
flag is telling whether it’s safe to add the current letter to result if it matches it will be added until it get false and the loop is
breaked . An if ccondition is working until flag is true and the char is added to the res string.

we are taking two for loops in which the first one is for comparing each alpahabet of first string with rest of the strings alphabet and the
second loop is for iterating  rest of the strings for comparision
*/