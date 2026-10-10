// Problem: Smallest window containing 0, 1 and 2
// Link: https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1

class Solution {
  public:
    int smallestSubstring(string &s) {
        // code here
        int ind0 = -1;
        int ind2 = -1;
        int ind1 = -1;
        int minl = INT_MAX;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == '0') ind0 = i;
            else if(s[i] == '1') ind1 = i;
            else if(s[i] == '2') ind2 = i;
        if(ind0 != -1 && ind1 != -1 && ind2 !=-1){
            int minn = min({ind0,ind1,ind2});
            int maxx = max({ind0,ind1,ind2});
            minl = min(minl,maxx - minn +1);
        }
    }
    return (minl == INT_MAX) ? -1 : minl;
        
}
};
