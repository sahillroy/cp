#include<iostream>
#include<vector>
using namespace std;

vector<int> Movezeroes(vector<int> arr){
    int n = arr.size();
    int i = 0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    return arr;
}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    arr = Movezeroes(arr);

    cout<<"The new array is: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}