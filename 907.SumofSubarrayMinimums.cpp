#include <bits/stdc++.h>
using namespace std;

int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>l(n),r(n);
        stack<int>st;
        //Left Distances
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&arr[st.top()]>arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                l[i]=i+1;
            }
            else
            {
                l[i]=i-st.top();
            }
            st.push(i);
        }
        //clear the stack
        while(!st.empty())
        {
            st.pop();
        }
        //Right Distances
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                r[i]=n-i;
            }
            else
            {
                r[i]=st.top()-i;
            }
            st.push(i);
        }
        long long s=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            s=(s+(long long)arr[i]*l[i]*r[i])%mod;
        }
        return s;
    }

int main() {
    int n;
    vector<int> arr;

    cout<<"Enter the number of Elements: ";
    cin>>n;

    cout<<"Enter the Elements: ";
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int res = sumSubarrayMins(arr);

    cout<<"The sum of minimum Element of subarrays is :"<<res<<endl;
    
    return 0;
}

/*
For each element, we find:
Left Distances→ how far it can extend to the left
Right Distances→ how far it can extend to the right

If an element can extend left times to the left and right times to the right, then it will be the minimum in : left × right subarrays.

So the contribution of each element is:
arr[i] × left × right

Approach
Step 1 — Find Left Distance
We use a monotonic increasing stack.

For each element:
►Pop elements greater than the current element.
►If stack becomes empty → it can extend to the beginning.
►Otherwise → distance from the previous smaller element.
This gives left[i].

Step 2 — Find Right Distance
Traverse the array from right to left.
►Pop elements greater than or equal to current.
►If stack becomes empty → it can extend to the end.
►Otherwise → distance from next smaller element.
This gives right[i].
*/