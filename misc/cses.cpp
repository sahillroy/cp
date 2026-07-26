// Problem: CSES
// Link: https://cses.fi/problemset/result/18098357/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> arr;
    if(n==1){
        cout<<"1"<<endl;
    }
    else if(n<4){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n>=4){
        for(int i =2 ; i<=n; i+=2){
            arr.push_back(i);
        }
        for(int i =1 ; i<=n; i+=2){
            arr.push_back(i);
        }
    }
 
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
 
   return 0;
}