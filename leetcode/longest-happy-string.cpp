// Problem: Longest Happy String
// Link: https://leetcode.com/problems/longest-happy-string/

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        if (a > 0) pq.push({a, 'a'});
        if (b > 0) pq.push({b, 'b'});
        if (c > 0) pq.push({c, 'c'});
        string s = "";

        while(!pq.empty()){
            auto[cnt,ch] = pq.top();
            pq.pop();

            if(s.size()>=2 && s[s.size() - 1] == ch && s[s.size()-2] == ch){
                if(pq.empty()) break;
                auto[cnt2,ch2] = pq.top();
                pq.pop();

                s+=ch2;
                cnt2--;

                if(cnt2>0) pq.push({cnt2,ch2});
                pq.push({cnt,ch});
            }

            else{
                s +=ch;
                cnt--;
                if(cnt>0) pq.push({cnt,ch});
            }
        }
        return s;
    }
};