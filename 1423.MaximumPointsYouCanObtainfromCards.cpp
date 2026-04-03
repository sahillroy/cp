#include <bits/stdc++.h>
using namespace std;

int MaxPoints(vector<int>& cardPoints, int k) {
    int r = cardPoints.size()-1;
    int lsum = 0,rsum = 0;
    int maxsum = 0;
    for(int l=0 ; l<k ; l++){
            lsum +=cardPoints[l];
            maxsum = lsum;
        }
        for(int i = k-1 ; i>=0 ; i--){
            lsum -= cardPoints[i];
            rsum += cardPoints[r];
            r--;
            maxsum = max(maxsum,lsum+rsum);
        }
        return maxsum;
}

int main() {
    int n;
    cout << "Enter the number of cards: ";
    cin >> n;
    vector<int> cardPoints(n);
    cout << "Enter the points on each card: ";
    for (int i = 0; i < n; i++) {
        cin >> cardPoints[i];
    }
    int k;
    cout << "Enter the number of cards to take: ";  
    cin >> k;

    int res = MaxPoints(cardPoints, k);
    cout << "Maximum points you can obtain: " << res << endl;
    return 0;
}