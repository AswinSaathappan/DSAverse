class Solution {
public:
    vector<int> nextSmallerElements(const vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n);         // To store results
        stack<int> st;                 // Stack to maintain NSEs

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            // Pop elements from stack >= current element
            while (!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }

            // If stack is empty, no smaller element
            if (st.empty()) {
                result[i] = -1;
            } else {
                result[i] = st.top();  // Top is next smaller
            }

            // Push current element into stack
            st.push(arr[i]);
        }

        return result;
    }
};
