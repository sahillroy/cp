// Problem: Strings
// Link: https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a+b<<"\n";
    string a1 =a;
    string b1 =b;
    swap(a1[0],b1[0]);
    cout<<a1<<" "<<b1<<"\n";
    return 0;
}