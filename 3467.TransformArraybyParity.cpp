#include <bits/stdc++.h>
using namespace std;

vector<int> transformArray(vector<int>& nums) {
        int evenCount = 0;
        
        // Count how many even numbers there are
        for (int num : nums) {
            if (num % 2 == 0) {
                evenCount++;
            }
        }
        
        // Fill the first 'evenCount' elements with 0
        for (int i = 0; i < evenCount; i++) {
            nums[i] = 0;
        }
        
        // Fill the remaining elements with 1
        for (int i = evenCount; i < nums.size(); i++) {
            nums[i] = 1;
        }
        
        return nums;
    }

int main() {
    
    vector<int> nums;
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        nums.push_back(element);
    }

    vector<int> transformedArray = transformArray(nums);
    cout << "Transformed array: ";
    for (int num : transformedArray) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}