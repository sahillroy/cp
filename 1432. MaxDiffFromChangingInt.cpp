#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int maxdiff(int num){
    string s = to_string(num);
    int maxv = num;
    int minv = num;

    for(char c ='0'; c<='9';c++){ // one more way to get max value by converting int into string and replace first digit with 9 for getting max value
        string a = s;
        replace(a.begin(),a.end(),c,'9');
        int val = stoi(a);
        maxv = max(maxv,val);
    }

    for(char c ='0'; c<='9';c++){
            string a = s;
            char y;

            if (a[0] == c) { // this is used because extra condition is given in Q if first digit is 0 convert it into 1 
                y = '1';
            } else { // if first digit is not 0 i.e. value=0 then replace first digit with 0 to get min value 
                y = '0';
            }

            replace(a.begin(), a.end(), c, y);
            if (a[0] != '0') {
                int val = stoi(a);
                minv = min(minv, val);
            }
    }
    return maxv - minv;
}

int main(){
    int num;

    cout<<"Enter the number: ";
    cin>>num;

    int res = maxdiff(num);

    cout<<"The Max Diff you can get from changing an integer is: "<< res << endl;
    return 0;

}
// this Q is same as 2566 maxdiff by remapping regarding function details
// the only difference is in calculating min value as given condition is Q is if for calculating min value if first digit is 0 convert it into 1
// otherwise convert the first digit into 0 for getting minimum value