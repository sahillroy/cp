#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int consecseq(vector<int> arr, int n){
    sort(arr.begin(),arr.end());//direct function for sorting
    int count =1;
    int maxCount =1;//here we are taking 2 variable for calculating max consec seq because it can be possible that there would
    // 2 or more seq in the array and we want the max one

    if(arr.empty()){ // conditon if array is empty
        return 0;
    }
    
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i] == arr[i+1]){// if elements are same the seq will not break but the count will also not increase 
            continue;
        }
        else if (arr[i] == arr[i+1]-1){
            count++;
        }
        else{
            maxCount = max(count,maxCount);// if seq is breaked the count will cbe comapred to max count and if it is bigger
            count = 1;                     // it will be replaced
        }
    }
    return max(maxCount,count);

}

int main(){
    vector<int> arr;
    int n;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int result = consecseq(arr,n);

    cout<<"The longest consecutive sequence in array is: "<< result << endl;
    return 0;
}
// here first we are sorting the array andthen fiding consecutive sequence if present usingfor loop