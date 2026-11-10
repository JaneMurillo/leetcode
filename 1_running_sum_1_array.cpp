#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (size_t i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4}; // Input array 1
    Solution s;
    vector<int> res = s.runningSum(nums);
    for (int j : res) cout << j << " ";   
    cout << endl;
    return 0;
}
