#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrange(vector<int> arr,int n){
    vector<int> pos; // to meet conditions we wil segregate the array in +ve and -ve elemets
    vector<int> neg; // we are not sorting it we are just segregating tomeet the conditons of Q

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    for(int i=0; i<n/2;i++){ //array must start from +ve bcz of condition so we are filling alternatively to satisfy conditon
        arr[2*i] = pos[i];   // i<n/2 is done as for 1 i 2 elements are filled 1-1 from pos and neg resp.
        arr[(2*i)+1] = neg[i];
    }
    return arr;
}

int main(){
    vector<int> arr;
    int n;
    
    cout<<"Enter the length of array: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    vector<int> result = rearrange(arr,n);
    
    cout<<"The Rearranged array is: ";
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}