#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:
    bool ValidStack(vector<int> &pushed, vector<int> &popped) {
        stack<int> st;
        int j = 0;

        for (int i = 0; i < pushed.size(); i++) {
            st.push(pushed[i]);

            while (!st.empty() && j < popped.size() && st.top() == popped[j]) {
                st.pop();
                j++;
            }
        }

        return j == popped.size();
    }
};

int main() {
    MyStack obj;

    int n1, n2;
    cout << "Enter size of pushed array: ";
    cin >> n1;

    vector<int> pushed(n1);
    cout << "Enter pushed elements:\n";
    for (int i = 0; i < n1; i++) {
        cin >> pushed[i];
    }

    cout << "Enter size of popped array: ";
    cin >> n2;

    vector<int> popped(n2);
    cout << "Enter popped elements:\n";
    for (int i = 0; i < n2; i++) {
        cin >> popped[i];
    }

    bool res = obj.ValidStack(pushed, popped);

    if (res)
        cout << "It's a Valid Stack Sequence.\n";
    else
        cout << "It's NOT a Valid Stack Sequence.\n";

    return 0;
}

/*
we are using 2 pointer for traversing pushed and popped array i and j

We are first inserting element into stack from pushed and checking whether the pop element is same as pushed 
If it is same we are popping it. We are doing thid operation continously until top of stack is not equal to popped[j]
and then we are incrementing i (that means pushing new element into stack from pushed) and then again checking the popping conditon

AT end if the j pointer is at end of popped array that means stack is valid and empty and we can perform operatio
*/