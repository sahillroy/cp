#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char> st;
        for(int i=0;i<n ;i++){
            while(!st.empty() && st.top()-'0'>num[i]-'0' && k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        int x=0;
        while(ans[x]=='0'){
            x++;
        }
        ans=ans.substr(x, ans.size());
        if(ans=="") return "0";
        return ans;

    }

int main() {
    string s;

    cout<<"Enter the String of digits: ";
    cin>>s;

    int k;
    cout<<"Enter the number of digits to remove: ";
    cin>>k;

    string result = removeKdigits(s, k);
    cout<<"Result after removing "<<k<<" digits: "<<result<<endl;

    return 0;
}

/*
Here we are using stack to keep track of the digits. We iterate through the string and for each digit, we compare it with the top of
the stack. If the current digit is smaller than the top of the stack and we still have digits to remove (k > 0), we pop from the 
stack. This ensures that we are removing larger digits before smaller ones, which helps in minimizing the resulting number.
After processing all digits, if we still have digits to remove, we pop from the stack until k becomes 0. Finally, we construct the 
resulting string from the stack, reverse it, and remove any leading zeros before returning the final result.

*/