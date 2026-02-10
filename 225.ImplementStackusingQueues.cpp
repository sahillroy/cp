#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:
    queue<int> mainQ;
    queue<int> tmpQ;

    void push(int x) {
        tmpQ.push(x);

        while(!mainQ.empty()) {
            tmpQ.push(mainQ.front());
            mainQ.pop();
        }

        swap(mainQ, tmpQ);
    }

    int pop() {
        int x = mainQ.front();
        mainQ.pop();
        return x;
    }

    int top() {
        return mainQ.front();
    }

    bool empty() {
        return mainQ.empty();
    }
};

int main() {
    MyStack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;   // 30

    cout << "Pop: " << s.pop() << endl;   // 30
    cout << "Pop: " << s.pop() << endl;   // 20

    cout << "Is empty? " << s.empty() << endl;

    return 0;
}

/* we are using 2 queues for implementing stack as queue is FIFO and stack LIFO
 first we are pushing the element in temp 
 then we are moving every element from main to temp queue
 at end we are swapping main and temp 

 by doing these 3 step we will get LIFO

 for ex [1,2,3]

 1. temp = [1] main=[]
   can't move main to temp as main is empty
   swapping main=[1] temp = []

 2. temp=[2] main=[1]
 moving main to temp => temp=[2,1] main=[]
 swapping main=[2,1] temp=[]

 3.temp=[3] main = [2,1]
 moving main to temp => temp=[3,2,1] main=[]
 swapping main=[3,2,1] temp =[]

 now it will pop out 3 first just like LIFO
*/