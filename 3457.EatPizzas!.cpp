#include <bits/stdc++.h>
using namespace std;

int Calories(vector<int> p){
    sort(p.begin(), p.end()); //  Sort the pizzas in ascending order 
    int n = p.size();
    int m = n / 4; //  Total number of days (each day we eat 4 pizzas)
    int odd = (m + 1) / 2; //  Number of odd days
    int even = m - odd; //  Number of even days
    
    long long sum = 0;
    int l = n - 1; //  l points to the last element
    
    // On odd days, we gain the weight of the heaviest pizza in the set of 4
    for (int i = 0; i < odd; i++) {
        sum += p[l]; //  Pick the largest pizza
        l--; //  Move left
    }
    
    //  On even days, we gain the weight of the second heaviest pizza in the set of 4
    for (int i = 0; i < even; i++) {
        l--; // Skip third largest pizza
        sum += p[l]; //  Gain the weight of the second largest pizza
        l--; // ⬅ Move left again
    }
    
    return sum; // Return maximum weight gained 
}

int main() {
    int n;
    cin>> n;

    vector<int> p(n);
    for(int i = 0; i < n; i++) {
        cin>> p[i];
    }

    int res = Calories(p);
    cout<<"The maximum calories that can be consumed is: "<< res << endl;
    return 0;
}

/*
In this code, we are given a list of pizzas with their respective calorie counts. The goal is to calculate the maximum calories 
that can be consumed over a series of days, where each day consists of eating 4 pizzas.
The function `Calories` takes a vector of integers representing the calorie counts of the pizzas. It sorts the pizzas in ascending 
order and calculates the total number of days based on the number of pizzas. It then determines how many odd and even days there are, 
as the strategy for consuming calories differs between these two types of days.
On odd days, the maximum calories consumed is equal to the weight of the heaviest pizza in the set of 4 pizzas, while on even days, 
it is equal to the weight of the second heaviest pizza. The function iterates through the sorted list of pizzas, summing up the
appropriate calorie counts based on whether the day is odd or even.
Finally, the main function reads the number of pizzas and their calorie counts from input, calls the `Calories` function, and 
outputs the maximum calories that can be consumed.    
*/