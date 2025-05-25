#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4};
    int k;
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter K: ";
    cin >> k;

    for (int i = 0; i < n - 1 && count < k; i++) {
        if (arr[i] == arr[i + 1]) {
            count++;
        }
    }

    cout << "Count of duplicate pairs up to K: " << count << endl;
    return 0;
}
