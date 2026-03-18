#include <bits/stdc++.h>
using namespace std;

class StockSpanner {
    stack<pair<int,int>>st;
    int idx = -1;
public:
    StockSpanner() {
        int idx = -1;
        while(!st.empty()) st.pop(); // for a new iteration(arr) stack should be empty
    }
    
    int next(int price) {
        idx += 1;
        while(!st.empty() && st.top().second<= price)st.pop();
        int ans = idx - (st.empty() ? -1 : st.top().first);
        st.push({idx,price});
        return ans;
    }
};

int main() {
    StockSpanner spanner;
    int n;
    cout<<"Enter the number of stock prices: ";
    cin>>n;
    cout<<"Enter the stock prices: "<<endl;
    for(int i=0; i<n; i++) {    
        int price;
        cin>>price;
        int span = spanner.next(price);
        cout<<"The stock span for price "<<price<<" is: "<<span<<endl;
    }   
    return 0;
}
/*
In this implementation, we maintain a stack that stores pairs of (index, price). The stack is used to keep track of the indices and 
prices of the stock prices in a way that allows us to efficiently calculate the stock span for each new price.
When we call the next() function with a new price:
We increment the index (idx) to keep track of the current position in the sequence of stock prices.
We pop elements from the stack as long as the top of the stack has a price less than or equal to the current price. This ensures that
 we are only keeping indices of prices that are greater than the current price.
After popping, we calculate the span as the difference between the current index and the index of the last price that is greater than 
the current price (which is now at the top of the stack). If the stack is empty, it means there are no previous prices greater than 
the current price, so we use -1 as the index.
Finally, we push the current index and price onto the stack and return the calculated span.
*/