#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev =0;
    int sign = (n < 0) ? -1 : 1; // store sign
    n = abs(n); // working with absolute value(only num)

    while(n>0){
       int a = n%10;//will give last place digit everytime
       rev = (rev *10) + a;//this formula is used for reversing
       n=n/10;//for next loop num will be one digit smaller
    }
    return rev*sign;
}

int main(){
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    int result = reverse(n);

    cout<<"The reverse of the num is: "<<result;
    return 0;
}
//here sign and absoloute function is used for reversing negative number as initially it is not working becuz of while loop condition