#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }
        return x == revertedNumber || x == revertedNumber / 10;
    }

int main(){
    int num ;
    cout<<"Enter the Number: ";
    cin>>num;
    isPalindrome(num);
    if (isPalindrome(num)) {
        cout << num << " is a Palindrome." << endl;
    } else {
        cout << num << " is not a Palindrome." << endl;
    }

    return 0;
}