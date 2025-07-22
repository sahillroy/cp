#include<bits/stdc++.h>
using namespace std;

int kokoeatingbanana(vector<int>arr,int &n,int &k){
    int maximum = *max_element(arr.begin(), arr.end());
        
        int low = 1;
        int high = maximum;

        while (low < high) {
            int mid = (low + high) / 2;
            int totalhour = 0;

            for (int i = 0; i < n; i++) {
                totalhour += ceil((double)(arr[i]) / mid);
            }

            if (totalhour <= k) {
                high = mid; // we can try a smaller speed
            } else {
                low = mid + 1; // need a faster speed
            }
        }
        return low;
    }

int main(){
    vector<int> arr;
    int n,k;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Enter the total number of Hours : ";
    cin>>k;

    int result = kokoeatingbanana(arr,n,k);

    cout<<"The minimum number of bananas koko should eat for each hour is: " << result << endl;
    return 0;
}
/*
here we are using binary search for calculating the  min number of banana for each hour. we are taking an mid number between 1 and highest
element in array, if it is less then we will move right hand side other wise left hand size 
*/
