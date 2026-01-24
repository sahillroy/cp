#include <bits/stdc++.h>
using namespace std;

int DivTwoInt(int d,int n){
    bool sign = true;
    int ans = 0;

    if(n == d) return 1;

    if(n>=0 && d<0) sign = false;
    if(n<0 && d>0) sign = false; //if divisor or divident is negative the ans will be -ve

    n = abs(n);
    d = abs(d);

    while(n>=d){
        int count = 0; // this will keep track of the power of 2

        while(n >= (d << (count+1))){ // this checks if n >= 2^count+1
            count += 1;
        }
        ans += (1 << count); // this will store the highest power of 2 and add to the quotient (it is nothing but 2^count)
        n = n- (d << (count)); // this is subtracting the highest quotient form divident
    }

    if( ans == (1 << 31) && sign) return INT_MAX;
    if( ans == (1 << 31) && !sign) return INT_MIN;
    return sign ? ans: -ans;
}

int main() {
    int d,n;

    cout<<"Enter the Number: "<<endl;
    cin>>n;

    cout<<"Enter the Divisor: "<<endl;
    cin>>d;

    int res =  DivTwoInt(d,n);

    cout<<"The Quotient after dividing "<<d<<"with "<<n<<"is "<<res<<endl;

    return 0;
}
/* 
This is a question of bit manipulation
In this we have to return Quotient without performing division
so  for ex if n=22 and d =3 the result should be 7
as we know any number can be written in the form of power of 2 
so we will break into pow of 2 
22 = 3 * 7
22 = 3 * (2^2 + 2^1 + 2^0)
22 = 3* 2^2 + 3*2^1 +3*2^0

the while loops are subtracting the highest value from n like it is checking if 2^0*3=3 which is less than 22 sot we are increasing the power 
until 2^2*3=12 and after that the num wil greater than 22 so we are subtracting 12 from 22 and storing it in ans(quotient) now new n=10 so 6
will be subtracted as it is next biggest value that can be subtracted and likewise added to ans 
In this way the quotient will be ans 
we are using if conditions fr checking boundary and and for sign identification
*/