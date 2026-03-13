#include <bits/stdc++.h>
using namespace std;

vector<int> Collision(vector<int> &arr){
    stack<int> st;

    for(int a:arr){
        bool alive = true;

        while(!st.empty() && st.top()>0 && a<0){
            if(abs(st.top()) < abs(a)){
                st.pop();
            }
            else if (abs(st.top()) == abs(a)) {
                    st.pop();               // both explode
                    alive = false;
                    break;
                }
                else {
                    alive = false;          // current asteroid explodes
                    break;
                }
            }
            if (alive) {
                st.push(a);
            }
        }
        vector<int> ans(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }



int main() {
    int n;
    cout<<"Enter the Number of asteroids: ";
    cin>>n;
    vector<int> arr;
    
    cout<<"Enter the asteroids: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    vector<int> res = Collision(arr);

    cout<<"The remaining asteroids are: ";
    for(int x:res){
        cout<<x<<" ";
    }

    return 0;
}

/*
Since positive sign means asteroid is moving to right and vice versa, We are check condition in for loop whether the top of stack
is +ve and pointed asteroid is -ve that means they will meet
so we will check if it is better than st.top() if yes then it will destroy st.top so we pop it 
else if they are same both will get destroyed so pop and bool alove is false
else the pointer asteroid is smaller so it will be destroyed i.e alive = false
and after all cases if pointed asteroid is bigger(i.e first if condition) and alive we will push it in stack
for output we will pop stack and store it reversely in array as it is asked that in output.
*/