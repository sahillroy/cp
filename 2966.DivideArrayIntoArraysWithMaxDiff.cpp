#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dividearr(vector<int> &arr, int n , int k){
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;

    for(int i=0 ; i<n ; i+= 3){

        if( arr[i+2] - arr[i] > k){
            return{};
        }
        result.push_back({arr[i],arr[i+1],arr[i+2]});
    }
    return result;
}

int main(){
    vector<int> arr;
    int n,k;

    cout<<"Enter the number of Elements: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter the value of K: ";
    cin>>k;

    vector<vector<int>> res = dividearr(arr,n,k);

    cout<<"The Divided arrays are: ";
    for(int i = 0; i < res.size(); i++) {
            for(int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }

