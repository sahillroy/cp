#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> intervals , int &n){
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> res;
    
    for(int i=0 ; i<n ; i++){
        if(res.size() != 0 && res.back()[1] >= intervals[i][0]){//intervals[i][0] in this i  refers to subarrays(brackets) like(1,2) &
            res.back()[1] = max(intervals[i][1], res.back()[1]);// 2nd indicates(either [0] or [1])to number's postion inside bracket 
        }//max will take the max right limit element between 2 subarrays
        else{
            res.push_back(intervals[i]);//condition for empty res
        }
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter the number of intervals: ";
    cin>>n;

    vector<vector<int>> intervals;
    cout<<"Enter the intervals: ";
    for(int i=0 ; i<n ; i++){
        vector<int> temp(2);// right way to take subarrays input of size 2 
        cin >> temp[0] >> temp[1];
        intervals.push_back(temp);
}


    vector<vector<int>> result = mergeIntervals(intervals,n);

    cout<<"The Merged Intervals are: ";
    for(int i=0 ; i<result.size() ; i++){
        cout << "[" << result[i][0] << ", " << result[i][1] << "] ";
    }// proper way to print output. here same as above i indicates subararray and 0,1 indicates position of elements inside subarray  
    cout << endl;

    return 0;
}

//here we wanted to merge intervals so first we will sort the intervals and then check if the end of first intervlagreater than
//beginning of 2nd interval if it is true then we can merge the intervals and take the max value(right(1th position)) as end limit

// Each intervals[i] is itself a vector of two integers:
// intervals[i][0] = start of the interval
// intervals[i][1] = end of the interval