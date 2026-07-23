// Problem: Basic Data Types
// Link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true

#include <iostream>
#include <iomanip> // Required for fixed and setprecision

using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Read values
    cin >> i >> l >> c >> f >> d;

    // Print values
    cout << i << "\n";
    cout << l << "\n";
    cout << c << "\n";
    
    // Set 3 decimal places for float
    cout << fixed << setprecision(3) << f << "\n";
    
    // Set 9 decimal places for double
    cout << fixed << setprecision(9) << d << "\n";

    return 0;
}