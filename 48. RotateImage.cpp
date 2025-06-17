// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<vector<int>> rotateimage(vector<vector<int>> &arr ,int &n){// & is used so the change in function will be modified int actual value 
//     for(int i=0 ; i<n ; i++){                                     // if not used a copy is created and changes are made on it
//         for(int j=i+1 ; j<n ; j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }

//     for(int i=0 ; i<n ; i++){             
//             reverse(arr[i].begin(),arr[i].end());
//         }

//     return arr;

// }

// int main(){
//     vector<vector<int>>arr;
//     int n;

//     cout<<"Enter the dimension of n x n matrix: ";
//     cin>>n;

//      // initializing matrix before taking input (imp)
//     cout<<"Enter the elements of the matrix: ";
//     for(int i =0 ; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cin>>arr[i][j];
//         }
//     }

//     vector<vector<int>> res = rotateimage(arr,n);

//     cout<<"The Rotated matrix is: ";
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cout<< res[i][j] <<" ";
//             cout<<endl;
//         }
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> rotateimage(vector<vector<int>> &arr, int n) {
    // Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for(int i = 0; i < n; i++) {
        reverse(arr[i].begin(), arr[i].end());
    }

    return arr;
}

int main(){
    int n;
    cout << "Enter the dimension of n x n matrix: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    cout << "Enter the elements of the matrix: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> res = rotateimage(arr, n);

    cout << "The Rotated matrix is:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//EXPLANATION
// we have to rotate the array y 90 degrees ad given in Q so we are first transposing the array by using swap function
// and then reverse the rows like row 1 2 3 will be written as 3 2 1 after transposing array will be 
// 1 2 3    1 4 7
// 4 5 6 =  2 5 8
// 7 8 9    3 6 9
// and then reversing
// 7 4 1
// 8 5 2
// 9 6 3