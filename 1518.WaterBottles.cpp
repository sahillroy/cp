#include <bits/stdc++.h>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
       int empty = numBottles; 

       while(numBottles>=numExchange){
        empty += numBottles/numExchange; 
       
        numBottles = (numBottles/numExchange) + (numBottles%numExchange);
       }
       return empty;
    }

int main() {
    int n,k;

    cout<<"Enter the Number of filled WaterBottles: ";
    cin>>n;

    cout<<"Enter the Number of empty Bottles required to exchange for 1 filled Bottle: ";
    cin>>k;

    int res = numWaterBottles(n,k);

    cout<<"Total Number of water bottles you can drink are: "<< res << endl;

    return 0;
}
/*
First Drink all filled waters and add to empty
After drinking trade those bottles for new one and drink it thats why we are dividing it with exchange value and adding it to empty

Update filled bottles count after exchanging the new empty ones and adding with remaining empty ones which are not traded

Ex. if filled = 15 and costexchange is 4
first drinking 15 bottle and adding it to empty =15
these bottles are now wempty so we are trading it 15/4 = 3. We'll get 3 filled waters so new empty = 15+3=18
now we have 3 new empty bottles after exchanging and 3 were left initially as  remainder was 3(15%4=3) so total 3+3 =6 empty bottles
we can exchange for 1 more bottle so empty = 18+1=9 
and now 2 empty bottles remained(6%4) and 1 new empty = 3 <4 so we stop
*/