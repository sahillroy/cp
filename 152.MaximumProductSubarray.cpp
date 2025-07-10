#include<bits\stdc++.h>
using namespace std;

int maxproduct(vector<int> arr, int &n){
    int maxproduct = arr[0];//incase only 1 element is present
    int currmax = arr[0];//for calcualting max each time in loop
    int currmin = arr[0];;// for negative elements as -ve * -ve can give positive product
    
    for(int i=1 ; i<n; i++){ //Start from i = 1 because i = 0 is already used in initialization.

        if (arr[i] < 0) {
            swap(currmax, currmin);// currmax can be converted into -ve and currmin can be +ve if multiplied by -ve number
        }

        currmax = max(arr[i], currmax * arr[i]);// as currmin and max is initialized as arr[0]
        currmin = min(arr[i], currmin * arr[i]);

        maxproduct = max(maxproduct,currmax);
    }
    return maxproduct;

}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the numer of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int result = maxproduct(arr,n);
    cout<<"The largest product is: "<< result <<endl;
    return 0;
}
// we have to find a subarray that has the largest product, and return the product. so 2 possibility can happen 1 two adjacent 
// elements can be multiplied and can give max product or two -ve elements can give big +ve numbers so two variables are initialized
// for +ve and -ve and assigned to arr[0] if arr is of 1 element so it can directly return the val. 