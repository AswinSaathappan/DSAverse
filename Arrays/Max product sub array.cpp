class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProd = nums[0];  // Global max product
        int currMax = nums[0];  // Max product ending at current index
        int currMin = nums[0];  // Min product ending at current index

        for (int i = 1; i < n; i++) {
            if (nums[i] < 0) {
                // Swap max and min if current number is negative
                swap(currMax, currMin);
            }

            // Update current max and min
            currMax = max(nums[i], currMax * nums[i]);
            currMin = min(nums[i], currMin * nums[i]);

            // Update global max
            maxProd = max(maxProd, currMax);
        }

        return maxProd;
    }
};
