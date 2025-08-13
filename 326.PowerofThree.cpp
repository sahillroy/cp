#include <bits/stdc++.h>
using namespace std;

bool powerOf3(int &n){
    if(n<=0){
        return false;// as min value of n can be 1 as 3^0 = 1
    }

    while(n%3 ==0){//checking whether the num is multiple of 3 if yes then it is divided by 3 and n is updated with remainder
        n = n/3;
    }
    return n==1;//it will return true only when n becomes 1 i.e it is power of 3
}

int main() {
    int n;
    
    cout<<"Enter the Number to check whether it's power of 3: ";
    cin>>n;

    bool res = powerOf3(n);

    if(res){
        cout<<"It is power of 3."<< endl;
    }
    else{
         cout<<"It is not a power of 3."<< endl;
    }
    
    return 0;
}
/*
We keep dividing n by 3 until it’s no longer divisible by 3.

If n was a power of 3, eventually it will be reduced exactly to 1.

If n was not a power of 3, the division will stop at some other number (like 2, 4, 5, etc.), and n == 1 will be false.
*/