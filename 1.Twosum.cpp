#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(vector<int>arr,int n,int target){
    for(int i=0;i<n-1;i++){
        for(int j= i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                return {i,j};
            }
        }
    }
    return {};

}

int main(){
    vector<int> arr;
    int n,target;

    cout<<"Enter the length of array: ";
    cin>>n;

    cout<<"Enter the Elements:  ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter the target value: ";
    cin>>target;

    vector<int> result = twosum(arr,n,target);

    cout<<"The index value of elements giving sum is: "<<result[0]<<" "<<result[1]<<endl;
    return 0;
}
