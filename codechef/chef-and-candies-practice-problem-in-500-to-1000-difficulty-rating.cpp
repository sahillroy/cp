// Problem: Chef and Candies Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if (x >= n) {
            cout << 0 << "\n";
        } else {
            int needed = n - x;
            cout << (needed + 3) / 4 << "\n";
        }
	}

}
