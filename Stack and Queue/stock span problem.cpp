class Solution {
public:
    vector<int> stockSpan(vector<int> arr, int n) {
        vector<int> span(n);       // to store the span for each day
        stack<int> st;             // to store indices of elements

        for (int i = 0; i < n; i++) {
            // Pop elements from the stack that are less than or equal to current price
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }

            // If stack is empty, span is entire length till now (i+1)
            if (st.empty()) {
                span[i] = i + 1;
            } else {
                span[i] = i - st.top(); // else span is distance from previous higher
            }

            st.push(i); // push current index
        }

        return span;
    }
};
