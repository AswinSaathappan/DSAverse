class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector<int> result;
        int n = arr.size();

        // Move window from start to end
        for (int i = 0; i <= n - k; i++) {
            int maxVal = arr[i];  // assume first element is max

            // check rest of the window
            for (int j = i; j < i + k; j++) {
                if (arr[j] > maxVal)
                    maxVal = arr[j];
            }

            // store max of this window
            result.push_back(maxVal);
        }

        return result;
    }
};
