#include <bits/stdc++.h>
using namespace std;

int elementmaxfreq(vector<int> arr){
    unordered_map<int,int> mpp;

    for(auto val:arr){
            mpp[val]++;
        }
        int maxi = INT_MIN;
        for(auto val:mpp){
            if( val.second > maxi){
                maxi = max(maxi,val.second);
            }
        }
        int ans= 0;
        for(auto val: mpp){
            if(val.second == maxi){
                ans += val.second;
            }
        }
        return ans;
}

int main() {
    vector<int> arr;
    int n;

    cout<<"Enter the number of Elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int res = elementmaxfreq(arr);

    cout<<"The number of elements in the array with maximum frequency is: "<< res << endl;

    return 0;
}
/*
We are using a hashmap for taking input of frequency and storing max value in maxi then checking again in hashmap if any other value have same freq as highesht(maxi)
and if it exist we addit to ans and return it and if nothing is there ans = maxi
*/