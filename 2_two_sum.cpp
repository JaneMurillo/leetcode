#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (size_t i = 0; i < nums.size(); i++) {
            for (size_t j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target)
                    return {(int)i, (int)j};
            }
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    vector<int> res = s.twoSum(nums, target);
    for (int x : res) cout << x << " ";   // 0 1
    cout << endl;
    return 0;
}
