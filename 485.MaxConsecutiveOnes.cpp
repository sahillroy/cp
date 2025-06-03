#include<iostream>
#include<vector>
using namespace std;

int maxcount(vector<int> arr,int n){
    int max = 0;
    int count = 0;
    for(int i = 0; i<n;i++){
        if(arr[i] != 1){
            if(max<count){
                max = count;
            }
            count = 0;
        }
        else{
            count++;
        }
    }
        if(max>count){
            return max;
        }
        else{
            return count;
        }
}
int main(){
     int n;
    vector<int>arr;
    cout<<"Enter the Number of elements: ";
    cin>>n;
    cout<<"Enter the binary elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int res = maxcount(arr,n);

    cout<<"The maximum consecutive ones are: "<< res << endl;
    return 0;
}