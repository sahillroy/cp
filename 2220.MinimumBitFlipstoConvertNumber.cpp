#include <bits/stdc++.h>
using namespace std;

int main() {
    int start,goal;

    cout<<"Enter the first Number: "<<endl;
    cin>>start;

    cout<<"Enter the Second Number: "<<endl;
    cin>>goal;

    int res = start^goal;//XOR operation
    int count=0;
    while(res){
        res = res & (res-1);
        count++;
    }
    cout<<"The Minimum Number of bit flips to convert start to goal is: "<<count;
    return 0;
}
/*
In this we have to return the minimum number of bit flips to convert start to goal
first we are doing XOR operation as in XOR if bits are same it gives 0 and if different it gives 1 and we have to return the count of 
different bits if the bits are different it will give 1 
101 * 110 => 011 (2 different bits)
for counting number of 1s we are assigning a count function
and then we are doing AND operation between res and res-1 which removes the rightmost 1 bit to 0. So when a bit is converted to 0 we are
011 & 010(res-1) => 010(rightmost set bit is unsetted) 
incrementing count and return count
*/