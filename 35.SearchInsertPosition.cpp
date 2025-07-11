#include<bits/stdc++.h>
using namespace std;

int insertpos(vector<int> arr, int&n,int &val){
    for(int i=0 ; i<n ; i++){
        if(arr[i] >= val){
            return i;
        }
    }
    return n;// if nums is not in array and greater than every other element then it will directly give pos of n
}

int main(){
    int n,val;
    vector<int> arr;

     cout<<"Enter the length of the array: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter the target value to get its index: ";
    cin>>val;

    int result = insertpos(arr,n,val);

    cout<<"The index of the target in the array is:  "<< result << endl;
    return 0;
}