// #include<iostream>
// using namespace std;

// int palindrome(string arr[],int n){
//     int count;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<arr[i].size();j++){
//           string rev[]=swap(arr[j],arr[j+1]);
//             if( arr[j] == arr[j+1]){
//                 count =+2;
//             }
//             if(arr[i] == rev[i]){
//             count =+4;
//             }
//             }
//     }
// }
//  int main(){
//     string arr[10] = {"lc","cl","gg"};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     palindrome(arr,n);
//  }

#include <iostream>
#include <unordered_map>
using namespace std;

int longestPalindrome(string arr[], int n) {
    unordered_map<string, int> count;
    int length = 0;
    bool hasCenter = false; // storing each word in hash map to get frequency of each 2 letter word

    // Count each word
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;  
    }

    for (auto &entry : count) {   //count is a hash map where Key(input) is string snd the count is frequency
        string word = entry.first; // entry.first gives the key from the current map entry stored in variable named word 
        int freq = entry.second;
        string rev = string(word.rbegin(), word.rend()); //returns a reverse iterator pointing to the last character of word
                                // "ab" ka "ba" hoga string rev me
        if (word == rev) {
            // like "aa", "gg"
            length += (freq / 2) * 4; // for self palindrome center boolean true hoga 
            if (freq % 2 == 1) {      //length will be incremented by 2 if it occurs 1 time and likewise a/c to formula   
                hasCenter = true;
            }
        } else if (count.find(rev) != count.end()) {
            int pairCount = min(freq, count[rev]);
            length += pairCount * 4; // agr self palindrome nahi hai aur reverse exist krra toh 4 add hoga
            count[word] = 0; // mark as used so that the reverse will not be counted again which is present later in string
            count[rev] = 0;
        }
    }

    if (hasCenter) {
        length += 2;
    }

    return length;
}

int main() {
    string arr[] = {"lc", "cl", "gg"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = longestPalindrome(arr, n);
    cout << "Longest Palindrome Length: " << result << endl;
    return 0;
}
