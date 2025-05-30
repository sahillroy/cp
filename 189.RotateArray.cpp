#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int>arr,int k){
    int n = arr.size();
    vector<int> res(n);
    for(int i = 0;i<n;i++){
    res[(i+k) % n] = arr[i];  // i+k ka mod isiliye liya if unka sum array ke size se bada hua toh wo wps ussi me rahe
// like if key is 8 and array is 7 toh i=0 ke liye 0+8mod7=1 waha store hoga 
    }
    return res;
}

int main(){
     vector<int> arr;
     int n,k;
     cout<<"Enter the number of elements in array: ";
     cin >> n;
     cout<<"Enter the Elements: ";
     for(int i=0;i<n;i++){
        int x;
        cin >>x;
        arr.push_back(x);
    }
    cout<<"Enter the shift key: ";
    cin>>k;

    arr = rotate(arr,k);  //Store the result of rotation


    cout<<"The rotated array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}