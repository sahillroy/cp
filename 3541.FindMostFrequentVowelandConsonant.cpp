#include <bits/stdc++.h>
using namespace std;

int mostfreqVandC(string s){
    int maxc = 0;
    int maxv = 0;

    unordered_map<char,int> mpp1; // for vowels 
    unordered_map<char,int> mpp2; // for consonent

    for(auto val : s){
        if( val == 'a' || val == 'e' || val == 'i' || val == 'o' || val == 'u'){ 
            mpp1[val]++;
            maxv = max(maxv,mpp1[val]);
        }

        else{
            mpp2[val]++;
            maxc = max(maxc,mpp2[val]);
        }
    }

    cout<<"The Maximum sum of highest freq of vowels and consonent is: "<< maxc + maxv << endl;
    
    return 0;
}

int main() {
    string s;

    cout<<"Enter the String: ";
    cin>>s;

    mostfreqVandC(s);
    
    return 0;
}
/*
We have to find the sum of the maximum frequency of the vowels and consonents so we are initializing 2 variables maxc and maxv to store 
max frequency 
We are using 2 maps each for vowels and consonents if char is vowel it will store in map1 otherwise map2 
and while the time of storing we are comparing its freq will max values and taking the max freq and printing their sum
Firstly for counting max freq i have used a different loopwhich is easy to understand

 for(auto val : mpp1){
            if(val.second > maxval1){
                maxval1 = val.second;
            }
        }

        for(auto val : mpp2){
            if(val.second > maxval2){
                maxval2 = val.second;
            }
        }

*/