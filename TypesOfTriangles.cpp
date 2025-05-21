#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
  
        sort(nums.begin(), nums.end());

  
        if (nums[0] + nums[1] <= nums[2]) {
            return "none";
        }

        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";
        }

        // Check for isosceles
        if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) {
            return "isosceles";
        }
        return "scalene";
    }
};

int main() {
    Solution sol;
    vector<int> sides;

    cout << "Enter three side lengths of the triangle:\n";
    for (int i = 0; i < 3; ++i) {
        int side;
        cin >> side;
        sides.push_back(side);
    }

    string result = sol.triangleType(sides);
    cout << "Triangle Type: " << result << endl;

    return 0;
}
