class Solution {
public:
    int celebrity(vector<vector<int>> &M) {
        int n = M.size();
        stack<int> st;

        // Step 1: Push everyone to the stack
        for (int i = 0; i < n; i++) {
            st.push(i);
        }

        // Step 2: Eliminate non-celebrities
        while (st.size() > 1) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            if (M[a][b] == 1) {
                // a knows b → a can't be celebrity
                st.push(b);
            } else {
                // a doesn't know b → b can't be celebrity
                st.push(a);
            }
        }

        // Step 3: Verify candidate
        int candidate = st.top();

        for (int i = 0; i < n; i++) {
            if (i != candidate) {
                // Candidate should not know i
                if (M[candidate][i] == 1) return -1;

                // Everyone should know candidate
                if (M[i][candidate] == 0) return -1;
            }
        }

        return candidate;
    }
};
