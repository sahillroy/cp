#include <bits/stdc++.h>
using namespace std;

string largest3sum(string num){
     string res = "";
       for(int i=0 ; i<=num.length()-3 ; i++){
        if( num[i] == num[i+1] && num[i+1] == num[i+2]){
            string largest = num.substr(i,3);
            if(largest > res){
                res = largest;
            }
        }
       } 
    return res;
}

int main() {

    string num;

    cout<<"Enter the String: ";
    cin>>num;

    string res = largest3sum(num);

    cout<<"The distinct good integer is: "<< res << endl;
    
    return 0;
}

/*
An integer is good if it meets the following conditions:
It is a substring of num with length 3.
It consists of only one unique digit.

we are solving this problem using sliding window protocol firstly we are iterating loop form o to its (length -3) to avoid size inbound 
error inside the loop we are checking if the string conatain a good number 

if yes we are inserting that substring to the new string largest using function num.substr(i,3) which means it will read the string from position
i to next 3 characters

and then we are checking if it is greater than the res string if it is greater then it will be updated
if no good integer is good then it will remove empty string ""
*/