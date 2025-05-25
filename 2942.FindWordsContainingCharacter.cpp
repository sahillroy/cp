#include <iostream>
using namespace std;

int main() {
    string arr[] = {"leet", "code"};
    char word;
    int res[10];
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the alphabet: ";
    cin >> word;

    // Initialize all values in res to -1
    for (int i = 0; i < arr_size; i++) {
        res[i] = -1;
    }

    for (int i = 0; i < arr_size; i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            if (arr[i][j] == word) {
                res[i] = j;  // Store first matching index
                break;       // Stop after first match
            }
        }
    }

    // Print only the indices where word was found
    cout << "Indices of words containing '" << word << "': [";
    bool first = true;
    for (int i = 0; i < arr_size; i++) {
        if (res[i] != -1) {
            if (!first) cout << ", ";
            cout << i;
            first = false;
        }
    }
    cout << "]" << endl;

    return 0;
}
