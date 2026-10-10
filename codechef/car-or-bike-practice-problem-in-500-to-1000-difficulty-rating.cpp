// Problem: Car or Bike Practice Problem in 500 to 1000 difficulty rating
// Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x<y){
	        cout<<"BIKE\n";
	    }
	    else if(x>y){
	        cout<<"CAR\n";
	    }
	    else{
	        cout<<"SAME\n";
	    }
	}
}
