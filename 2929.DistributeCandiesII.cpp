#include<iostream>
using namespace std;

int distribute(int n,int limit){
    int count =0;
    for(int i=0;i<=limit;i++){    // i refers to first child
          for(int j=0;j<=limit;j++){   // j=second child
            int k = n-i-j;             // k is third child and it get remaining candies 
            if(k>=0 && k<=limit){
                count++;      // count is only incrementong when i,jk is less than limit and equal to n combined
            }
          }
    }
    return count;
}

int main(){
    int n,limit;
    int res;

    cout<<"Enter total number of candies: ";
    cin>>n;
    cout<<"Enter the limit of candies provided to a child: ";
    cin>>limit;

    res = distribute(n,limit);
    cout<<"The total number of ways of distributing candies are: "<<res<<endl;
}
