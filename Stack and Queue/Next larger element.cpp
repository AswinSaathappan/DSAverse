class Solution {
public:
    vector<int> nextLargerElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1); // Initialize result with -1
        stack<int> st;

        // Traverse 2n - 1 to simulate circular array
        for (int i = 2 * n - 1; i >= 0; i--) {
            int curr = nums[i % n];

            // Maintain decreasing stack
            while (!st.empty() && st.top() <= curr) {
                st.pop();
            }

            // Only fill result for first n elements
            if (i < n) {
                if (!st.empty()) {
                    result[i] = st.top();
                }
            }

            // Always push to stack
            st.push(curr);
        }

        return result;
    }
};
