#include <bits/stdc++.h>
using namespace std;

int assign(vector<int>& g, vector<int>& s, int m, int n) {
        int cnt=0;
        int i=0; 
        int j=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

    while(i<m && j<n){
        if(g[i] <= s[j]){
            cnt++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
        return cnt;
}

int main() {
    int n, m;
    cout<< "Enter the number of children and the number of cookies: ";
    cin >> m >> n; 
    
    vector<int> g(m); 
    vector<int> s(n); 

    cout << "Enter the greed factors of the children: ";
    for (int i = 0; i < m; i++) {
        cin >> g[i];  
    }

    cout << "Enter the sizes of the cookies: ";
    for(int i = 0; i < n; i++) {
        cin >> s[i];  
    }
    int result = assign(g, s,m,n);
    cout << "Maximum number of children that can be content: " << result << endl;
    
    return 0;
}

/*
In this code, we define a function `assign` that takes two vectors `g` and `s`, representing the greed factors of children and the 
sizes of cookies, respectively. The function sorts both vectors and uses a two-pointer approach to count how many children can be 
content with the available cookies. The main function reads input values for the number of children and cookies, their respective 
greed factors and sizes, and then calls the `assign` function to get the result, which is printed to the console.

*/