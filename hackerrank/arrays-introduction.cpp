// Problem: Arrays Introduction
// Link: https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function    
    long a1 = *a + *b;
    long b1 = abs(*a - *b);
    cout<<a1<<endl;
    cout<<b1<<endl;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}