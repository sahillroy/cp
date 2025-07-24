#include <bits/stdc++.h>
using namespace std;

// Check if it is possible to make 'm' bouquets of size 'n' by day 'mid'
bool bouquets(vector<int> &arr, int mid, int m, int n) {
    int count = 0;
    int nofb = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= mid) {
            count++;
            if (count == n) { // When we get 'n' consecutive flowers
                nofb++;
                count = 0;    // reset for next possible bouquet
            }
        } else {
            count = 0; // break the consecutive streak if bloom day > mid
        }
    }
    return nofb >= m;
}

// Find minimum days to make 'm' bouquets of size 'n'
int minDays(vector<int> &arr, int m, int n) {
    int totalFlowersNeeded = m * n;
    if (arr.size() < totalFlowersNeeded) {
        return -1; // Not enough flowers
    }

    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (bouquets(arr, mid, m, n)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    vector<int> arr;
    int k, m, n;

    cout << "Enter the Number of Flowers: ";
    cin >> k;

    cout << "Enter the Blooming days of the flowers: ";
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << "Enter the Number of Bouquets: ";
    cin >> m;

    cout << "Enter the size of 1 Bouquet: ";
    cin >> n;

    int result = minDays(arr, m, n);

    if (result == -1) {
        cout << "It is not possible to get " << m << " bouquets of size " << n << "." << endl;
    } else {
        cout << "The minimum number of days required to get the bouquets is: " << result << endl;
    }
    return 0;
}

/*
here first we are taking the lowest and highest value of the array i.e. the lowest and highest day for blooming a flower

then initially we are checking  condition that if m*n i.e. m bouqets containing n flowers is less then the size of array (which is number
of flower) then we are directly returning -1 as it can't be possible to make those bouqets

then we are doing a binary search and checking for the mid value (blooming day) if it is possible to make the bouqets if not we are increasing 
low = mid +1 and checking for higher mid i.e. higher blooming day. If it is less then mid then making high = mid and checking for lower value
as we want min blooming day. We are checking it by calling a function called bouqets

In bouqets we have 2 variables count and nofb=number of bouqets. As we want conseq flowers for bouqets ,we are increasing count if we encounter 
and flower which is already bloomed i.e its value is less than mid unless we get count == n i.e. 1 bouqet is complete then we make count =0 and 
start again. This function returns true only when nogb is equal or greater than m(i.e number of bouqets) unless false and this function will
run for another value of mid

*/