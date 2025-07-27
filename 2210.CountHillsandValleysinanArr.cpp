#include<bits/stdc++.h>
using namespace std;

int counthills(vector<int>arr,int &n){
    int hill =0;

    for(int i=1 ; i< n-1 ;i++){// here loop is starting from 1 and ending at n-1 because we have to compare every element with it's adjacent
        int prev =i-1;
        int next = i+1;

        if ( arr[i] == arr[i-1]){// if it has same elements we have to skip
            continue;
        }

        while(prev>=0 && arr[prev] == arr[i]){
            prev--;//this loop pushes prev to left for comparison if it encounter same element
        }

        while(next<n && arr[next] == arr[i]){
            next++;//this loop pushes next to right for comparison if it encounter same element
        }

        if(prev>=0 && next<n){
            if((arr[prev] > arr[i] && arr[next] > arr[i]) || (arr[prev] < arr[i] && arr[next] < arr[i])){
                hill++;
            }
        } 
    }
    return hill;
}
int main(){
    int n;
    vector<int>arr;
    
    cout<<"Enter the Number of elements: ";
    cin>>n;
    
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    int res = counthills(arr,n);

    cout<<"The Number of Hills and Valleys are: "<< res << endl;
    return 0;
}

/*
In this Question we have to find the number of valleys and hills which can be calculated by comparing each element with it's adjacent
if it is bigger than it's adjacent it is considered as hill otherwise valley

first we are are starting loop from i to n-1 as first and last can never be hill or valley as it doesn't have 2 adjacent elements and also 
we have to assign a pointer to its left and right.

One condition is provided in the Q that if adjacent elements are same it is considered part of the same hill or valley thats why if we if we
find same element we continue 

we are taking 2 while loops each for prev and next if adjacent elements are same we move left in prev and right in next for comparing distinct
element for hills and valleys

the last if statement is used for comparing the elements if we encounter a hill and a valley or both together we will increment hill and return it.
*/