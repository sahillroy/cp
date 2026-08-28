#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of tasks: ";
    cin >> n;

    vector<int> tasks(n);
    cout << "Enter the time required for each task: ";
    for(int i = 0; i < n; i++) {
        cin >> tasks[i];
    }

    int groups=0;
    unordered_map<int, int> taskCount;
    for(int time : tasks) {
        taskCount[time]++;
    }

    for(auto &val : taskCount) {
        int frequency = val.second;
        int q = frequency / 3;

        if(frequency % 3 != 0) {
            q++;
        }
        groups += q;
    }
    cout << "Minimum rounds required: " << groups << endl;
    return 0;
}

/*
The major logic behind this code is to count the frequency of each unique task time and then determine how many groups of 3 can 
be formed from that frequency. If there are leftover tasks that cannot form a complete group of 3, we add an additional round to 
account for them. This ensures that all tasks are completed in the minimum number of rounds possible. In this we are first using
an unordered_map to count the frequency of each task time, and then we iterate through the map to calculate the number of rounds
needed for each unique task time. Finally, we sum up the rounds for all unique task times to get the total minimum rounds required 
to complete all tasks. 'q' is calculated as the integer division of frequency by 3, and if there is a remainder, we increment 'q' 
by 1 to account for the leftover tasks. The final result is printed to the console.
*/