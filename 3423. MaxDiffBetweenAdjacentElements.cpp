#include<iostream>
#include<vector>
#include<math.h> // for taking absolute keyword(abs)
using namespace std;

int maxdiff(vector<int> arr, int n){

    if(n<2) return 0;   // as not enough element for performing operation

    //initializing the max diff of last element and first as it is circular array
    int maxdiff = abs(arr[n-1] - arr[0]); //absolute(abs) is used The function abs() fixes the error because it converts any
                                          //negative difference to a positive one as we are calculating a magnitude
    int diff = 0;                         

    for(int i=0;i<n-1;i++){ // loop stops ar n-1 as in n i+1 will be out of bound
        diff = abs(arr[i]-arr[i+1]);
         
        if(diff > maxdiff){
            maxdiff = diff;
        }
    }
    return maxdiff;    
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

    int result = maxdiff(arr,n);

    cout<<"The maximum difference between adjacent elements in a circular array is: " << result <<endl;
    return 0;

}