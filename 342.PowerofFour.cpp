#include <bits/stdc++.h>
using namespace std;

bool powerOf4(int &n){
    if(n<=0){
        return false;// as min value of n can be 1 as 4^0 = 1
    }

    while(n%4 ==0){//checking whether the num is multiple of 4 if yes then it is divided by 4 and n is updated with remainder
        n = n/4;
    }
    return n==1;//it will return true only when n becomes 1 i.e it is power of 4
}

int main() {
    int n;
    
    cout<<"Enter the Number to check whether it's power of 4: ";
    cin>>n;

    bool res = powerOf4(n);

    if(res){
        cout<<"It is power of 4."<< endl;
    }
    else{
         cout<<"It is not a power of 4."<< endl;
    }
    
    return 0;
}

/*
same logic as implemented in power of three (Q 342)
*/