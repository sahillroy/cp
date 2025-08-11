#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s,string goal){
    if( s.size() != goal.size()){
            return false;
        }
        string a = s+s;

        if(a.find(goal) != string::npos){//this function checks if the substring is present in the string
            return true;
        } 
    return false;
} 

int main() {
    string s,goal;

    cout<<"Enter the first String: ";
    cin>>s;
    
    cout<<"Enter the second String ";
    cin>>goal;

    bool res = rotateString(s,goal);

    if(res){
        cout<<"The Strings are rotated and identical. ";
    }
    else{
        cout<<"The Strings are not identical. ";
    }
    return 0;
}
/*
This code checks if one string can be rotated to form another by first ensuring both strings have the same length (a necessary condition 
for rotation). It then creates a new string a by concatenating the original string s with itself, which ensures that all possible rotations 
of s appear as substrings within a. Using a.find(goal), it searches for goal inside a, and if the result is not string::npos (meaning goal 
exists as a substring), it returns true; otherwise, it returns false. This method works in O(n) time on average and is a concise way to 
check string rotations.
*/