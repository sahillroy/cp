#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target){
    int m = matrix.size();
    int n = matrix[0].size();

    int row =0;
    int col = n-1;//2 pointer which will search element in every row

    while(row < m && col >= 0){
        if(target == matrix[row][col]){
            return true;
        }
        else if( target < matrix[row][col]){
            col--;//if traversing element is bigger than we are moving leftwards to samller elements
        }
        else{
            row++;//if element is not present in row than we are moving to new row
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

    bool res = searchMatrix(arr,target);

    if(res){
        cout<<"Element is present in Matrix."<<endl;
    }
    else{
        cout<<"Element is not present in Matrix."<<endl;
    }

    return 0;
}
/*
This is Optimal solution

First we are initializing 2 variables m and n where m is number of rows and n is number of elements in each row.

Next we are using 2 pointers row and column for traversing in each row
from the righmost end towards beginning inside while loop.

If target element is present it returns true directly else if target is smaller than the traversed element we are moving
leftwards and if the element is not present in the row we are moving to the next row downwards.

this can also be solved by the method used in LC 74(best for understanding)
The only difference between that Q and this is that in that Q 2D matrix is sorted fully i.e the last element of row is smaller
than first element of next row but in this Q the elements are sorted only row -wise and not vertically
*/