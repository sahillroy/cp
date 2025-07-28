#include<bits/stdc++.h>
using namespace std;

int weightcapacity(vector<int>weights,int &n,int &k){
    int maximum = INT_MIN;
    int sum =0;

    for(int i=0 ; i<n ; i++){
        sum += weights[i];
        maximum = max(maximum,weights[i]);
    }
        
        int low = maximum;//since if lowest capacity(low) is isn't start with max weight the array(weights) will never be loaded   
        int high = sum;// if we have given min days(1) then the max capacity should be sum of all array(weights)

        while (low < high) {
            int mid = (low + high) / 2;

            int day =1;
            int sow =0;
            for(int i=0 ; i< weights.size() ; i++){
                if(sow + weights[i] > mid){
                    day++;
                    sow =0;
                }
                sow += weights[i];//adding this to next days weight as it was exceedign the sum of weights for previous one
            }
            if( day > k){
                low = mid +1;
            }
            else{
                high = mid;
            }
        }
        return low;
}

int main(){
    vector<int> weights;
    int n,k;

    cout<<"Enter the number of Packages: ";
    cin>>n;

    cout<<"Enter the Weight of each package: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        weights.push_back(x);
    }

    cout<<"Enter the total number of days for completion of shipment: ";
    cin>>k;

    int result = weightcapacity(weights,n,k);

    cout<<"The least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within"<<k<<" days is: " << result << endl;
    return 0;
}
/*
In this Q we have given an array of weights of packages and total number of days for completing the shipment and we have to complete it within
the days and we have to calculate how much weight we can ship in one day for compeleting the shipment of whole array in given time
eg =  weights[] = {5,4,5,2,3,4,5,6}, d = 5
Day         Weights            Total
1        -       5, 4          -        9
2        -       5, 2          -        7
3        -       3, 4          -        7
4        -       5              -        5
5        -       6              -        6
So, the least capacity should be 9.

for this first we have to set the values of low and high in which binar search will happen

for low we have to take max element of array(weight)so that it can ship. If any single package weighs more than the capacity, 
it cannot be shipped at all, on any day.

for high we have to take sum of all elements(weights)so that it can ship in 1 day.max case

Inside we are using a for loop for calculating sum for 1 day and if the sum exceeds the max weight for 1 day we are incrementing the
day counter which means it will be shipped on next day and making sum of weights(sow) back to zero for calculating sum for next day
and adding the weight to the sum of next day as it was exceeding the sum of weight for previous day

at last if the calculated day is more than provided day(deadline) we have to increase the max weight for 1 day counter otherwise if it
satisfys we are checking for  less weight in 1 day as we want min value.
*/