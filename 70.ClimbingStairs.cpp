#include <bits/stdc++.h>
using namespace std;
    
int climbStairs(int n) {
         if (n <= 3) return n;

        int prev1 = 3;
        int prev2 = 2;
        int cur = 0;

        for (int i = 3; i < n; i++) {
            cur = prev1 + prev2;
            prev2 = prev1;
            prev1 = cur;
        }

        return cur;    
    }
    
int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    int result = climbStairs(n);
    cout << "Number of ways to climb " << n << " stairs: " << result << endl;
    return 0;
    }

/*
In this code, we define a function `climbStairs` that calculates the number of ways to climb `n` stairs using dynamic programming. 
The function uses two variables, `prev1` and `prev2`, to store the number of ways to climb the previous two steps. It iteratively 
calculates the number of ways to climb each step until it reaches `n`. The main function prompts the user for the number of stairs 
and outputs the result.    
It is implementation of the Fibonacci sequence where the number of ways to climb `n` stairs is the sum of the ways to climb `n-1` 
and `n-2` stairs.
*/