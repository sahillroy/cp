#include<iostream>
#include<vector>
using namespace std;

vector<int> Movezeroes(vector<int> arr){
    int n = arr.size();
    int i = 0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++; // here i++ only happens if the above condition satisfies otherwise i will not increment
            // and only j will increment. This is necesarry if we have 2 or more consec zeroes  
        }
    }
    return arr;
}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    cout<<"Enter the Elements: "; // for taking input array this method is used as the other method of arr[n]
                                  // gives segmentation fault
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