#include <bits/stdc++.h>
using namespace std;

int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int res = 0;
        long long maxDiag = -1;  

        for (int i = 0; i < dimensions.size(); i++) {
            long long a = dimensions[i][0];
            long long b = dimensions[i][1];

            long long temp = (a * a) + (b * b);  // calc diagonal size
            long long area = a * b;

            if (temp > maxDiag || (temp == maxDiag && area > res)) {
                maxDiag = temp;
                res = area;
            }
        }
        return res;
    }


int main() {
   vector<vector<int>> dimensions = {
        {1,10},{3,10},{4,4},{2,6},{6,3},
        {6,4},{9,1},{6,1},{2,3}
    };

    int res = areaOfMaxDiagonal(dimensions);

    cout <<"The Max area of longest Diagonal rectangle is  "<< res << endl;
    return 0;
}
/*
here we want to first calculate the value of max diagonal of sides of rectangle and then return the area of the rectangle which has max diagonal
size

firstly we are traversing the dimensions array and calculating the diagonal if we encounter the bigger diagonal then we are updating it with
maxdiag and then storing its area in res until we find longest diagonal we are using long gives more precision of decimal values while calculating diagonal

here we are not square rooting diagonal because 
No rounding/truncation problems.
Faster (no need to call sqrt).
Safer (stays in integers, no floating-point issues).
Previously after sqrting we are getting decimal value which are creating problems now we are comparing directly squared values

*/