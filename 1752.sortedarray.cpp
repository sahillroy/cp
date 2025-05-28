// #include<iostream>
// using namespace std;

// bool sortedorrotated(int arr[],int n){
//       int count =0;
//       int prev = arr[0];
//       for(int i=1;i<n;i++){
//         if(prev>arr[i]) {
//             count++;
//           if(count>1) return false;
//         }
//         prev = arr[i % n];
//         }
//         return true;
//     }

// int main(){
//     int arr[10]={3,4,5,1,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sortedorrotated(arr,n);
//     if(sortedorrotated(arr,n)){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is Unsorted"<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

bool sortedOrRotated(int arr[], int n) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        // Compare current element with the next (with wrap-around)
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }
    
    return count <= 1;
}

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (sortedOrRotated(arr, n)) {
        cout << "Array is sorted and rotated" << endl;
    } else {
        cout << "Array is not sorted and rotated" << endl;
    }

    return 0;
}
