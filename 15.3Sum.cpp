#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> arr , int n){
    set<vector<int>> a;
    sort(arr.begin(),arr.end());
    vector<vector<int>> res;
    
    for(int i=0 ; i<n ; i++){
        int j = i+1;
        int k = n-1;

        while(j<k){
            int sum = arr[i] + arr[j] +arr[k];

            if(sum == 0){
                a.insert({arr[i],arr[j],arr[k]});//insert is used in place of push_back so that no duplicates can be used
                j++;
                k--;
            }
            else if (sum<0){
                j++;//arr is sorted if sum is negative so the j pointer will move to bigger value(right)
            }
            else{
                k--;//arr is sorted if sum is greater than 0 so the k pointer will move to smaller value(left)
            }
        }
    }

    for(auto triplets : a)
            res.push_back(triplets);
        return res; 
    }

int main(){
    int n;
    vector<int> arr;

    cout<<"Enter the numer of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<vector<int>> result = threesum(arr,n);

    cout<<"The Majority element is: ";
    for(int i=0 ; i<result.size() ; i++){
        for(int j=0 ; j<result[i].size() ; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}