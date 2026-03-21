#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++] !=s[end--]){
                return false;
            }
        }
        return true;
    }

    void substring(int index, string s, vector<string> &path,vector<vector<string>> &res){
        if(index == s.size()){
            res.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                substring(i+1,s,path,res);
                path.pop_back();
            }
        }
    }
   
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        substring(0,s,path,res);
        return res;
    }


int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    vector<vector<string>> res = partition(s);
    cout << "Palindrome partitions of the string are: " << endl;
    return 0;
}

/*
In this code, we define a function `isPalindrome` to check if a substring is a palindrome. The `substring` function is a recursive 
helper function that generates all possible partitions of the input string `s` and checks if each partition is a palindrome. If it 
is, it adds the partition to the current path and continues to explore further partitions. The main function reads a string from the 
user, calls the `partition` function to get all palindrome partitions, and prints the results.
The partition function initializes the result vector and the path vector, and starts the recursive process by calling the `substring`
function
In substring function, we check if the current index has reached the end of the string. If it has, we add the current path to the 
result vector. Otherwise, we iterate through the string starting from the current index, checking if the substring from the current 
index to the current iteration index is a palindrome. If it is, we add that substring to the path and recursively call the `substring`
function with the next index. After exploring that path, we backtrack by removing the last added substring from the path.

*/