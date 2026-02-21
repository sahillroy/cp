#include <bits/stdc++.h>
using namespace std;

class Minstack{
public:
stack<pair<int,int>> st;
Minstack(){}

void push(int val){
    int minv = INT_MAX;

    if(!st.empty()){
        minv = min(val,st.top().second);
        st.push({val,minv});
    }
    else{
        st.push({val,val});
    }
}

void pop(){
    st.pop();
}
int peek(){
    if(st.empty()){
        return -1;
    }
    return st.top().first;
}
int getmin(){
    if(st.empty()){
        return -1;
    }
    return st.top().second;
}

};

int main() {
    Minstack st;
    
    st.push(10);
    st.push(20);

    cout << "Top: " << st.peek() << endl;
    cout << "Min: " << st.getmin() << endl;

    st.push(5);

    cout << "Top after pushing 5: " << st.peek() << endl;
    cout << "Min after pushing 5: " << st.getmin() << endl;
}

/*
We are using a stack pair which is storing the element and the min value at that moment
when we are pushing an element in staxk we are checking whether stack is empty or not if it is empty
we are directly pushing val to both top(first) and minv(second) if stack has already an element we are comparing 
the val with minv and then storing the minimum value amongst them

For poping we are poping th top element which leads in popping both top element and minv

for peeking we are returning top of stack value i.e. st.top().first
For getmin we are returning top of stack minvalue(minv) i.e. st.top().second
*/