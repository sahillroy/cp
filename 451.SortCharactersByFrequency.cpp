#include <bits/stdc++.h>
using namespace std;

string CharbyFreq(string s){
    
    unordered_map<char,int> mpp;

    for(auto val : s){
        mpp[val]++;//storing characters with its frequency
    }

    vector<pair<int,char>> freq;

    for(auto val : mpp){
        freq.push_back({val.second,val.first});
    }
    sort(freq.rbegin(),freq.rend());

    string ans;

    for(auto val : freq){
        ans.append(val.first,val.second);
    }
    
    return ans;
}

int main() {
    string s;
    
    cout<<"Enter the String: ";
    cin>>s;

    string res = CharbyFreq(s);

    cout<<"The Characters sorted by their frequency are as follows: "<< res << endl;
    return 0;
}


/*
We have to sort it in decreasing order based on the frequency of the characters and return the string
First we are using hashmaps to count the frequency of the characters then we are initializing a vector pair array
vector<pair<>> in C++ is basically a dynamic array where each element stores two related values together. Like

pair<int, char> p = {5, 'a'};
cout << p.first;  // 5
cout << p.second; // a

OR

vector<pair<int, char>> v;

v.push_back({3, 'x'});
v.push_back({1, 'y'});
v.push_back({4, 'z'});

for (auto p : v) {
    cout << p.first << " " << p.second << endl;
}
so we are storing based on freq thats why first int and then char is coming and it is storing in format freq.push_back({val.second,val.first})
then we are sorting it in reverse order (as we want descending order) thats why rbegin(),rend()

and finally pushing it back to a resultant string in which char is coming first 
*/