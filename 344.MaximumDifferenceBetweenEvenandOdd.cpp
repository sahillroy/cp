#include<iostream>
#include<map>  // for hashmaps
#include<climits> // for INT_MIN AND INT_MAX
using namespace std;

int maxdiff(string s){
    int oddmax = INT_MIN; //INT_MIN & MAX is for finding maximum or minimum values 
    int evenmin = INT_MAX;// and to avoid 4743645 as answers
    map<char,int> mpp;
    for(auto value : s){  // for loop in which frequency is denoted as value and key as s(string)
        mpp[value]++;
    }
    for(auto value : mpp){
        if(value.second % 2 == 0){
            evenmin = min(evenmin,value.second);
        }
        else{
            oddmax = max(oddmax,value.second);
        }
    }
    return oddmax-evenmin;
}

int main(){
     string s;
     cout<<"Enter the string: ";
     cin>>s;
     int res =maxdiff(s);
     cout<<"THe maximum difference between even and odd frequency is: "<<res<<endl;
     return 0;
}