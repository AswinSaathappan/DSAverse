#include <stack>
using namespace std;

class Solution {
public:
    void sortStack(stack<int>& st) {
        stack<int> temp;

        while (!st.empty()) {
            // Step 1: Pop from original
            int curr = st.top();
            st.pop();

            // Step 2: Move elements from temp to st if they're < curr
            while (!temp.empty() && temp.top() < curr) {
                st.push(temp.top());
                temp.pop();
            }

            // Step 3: Place curr in its correct position in temp
            temp.push(curr);
        }

        // Move back from temp to st (optional if you want final result in `st`)
        while (!temp.empty()) {
            st.push(temp.top());
            temp.pop();
        }
    }
};
