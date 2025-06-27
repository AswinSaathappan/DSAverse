class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    // Return the indices in sorted order
                    if (i < j)
                        return {i, j};
                    else
                        return {j, i};
                }
            }
        }

        // This line is just for safety, though the problem says one solution always exists.
        return {};
    }
};
