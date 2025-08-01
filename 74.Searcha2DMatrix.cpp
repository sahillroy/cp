#include<bits/stdc++.h>
using namespace std;

bool binarysearch(vector<int> matrix, int target){
        int low = 0;
        int high = matrix.size()-1;

        while(low<=high){
            int mid = low + (high - low)/2;
            if (matrix[mid] == target){
                return true;
            }
            else if (target > matrix[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
    }
    return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0 ; i<n ; i++){
            if( target >= matrix[i][0] && target <= matrix[i][m-1]){
                return binarysearch(matrix[i],target);
            }
        }
    return false;
    }

int main(){
    vector<vector<int>> arr;
    int n,m,target;

    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;

    arr.resize(m, vector<int>(n));

    cout<<"Enter the Elements: ";
    for(int i=0;i<m;i++){
        for(int j=0 ; j<n ; j++){
        cin>>arr[i][j];
        }
    }

    cout<<"Enter the target Element: ";
    cin>>target;

    int res = searchMatrix(arr,target);

    if(res){
        cout<<"Element is present in Matrix."<<endl;
    }
    else{
        cout<<"Element is not present in Matrix."<<endl;
    }

    return 0;
}
/*
here first we are initializing m and n where n is no of rows and m is number of elements in each rows which is denoted by matrix[0].size();
then we are running a for loop for each row (till n) as in matrix elements are sorted if target is greater than first element of row and less
than last element of column if it is present we are calling a simple binary function for 1D array and passing the target and the row in which 
element is present
*/