#include<iostream>
using namespace std;

int divandnondiv(int n,int m){
    int num1=0;
    int num2=0;
    for(int i=1;i<=n;i++){
       if(i%m != 0){
        num1 +=i;
       }
       else{
         num2 +=i;
       }
    }
    return num1-num2;
}

int main(){
    int m,n;
    cout<<"Enter the value of N and M: ";
    cin>>n>>m;
    int result = divandnondiv(n,m);
    cout<<"The difference of sum is"<<result;
    return 0;
}