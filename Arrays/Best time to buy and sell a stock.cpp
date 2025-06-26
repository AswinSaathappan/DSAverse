class Solution {
public:
    int stockBuySell(vector<int> arr, int n) {
        int minPrice = arr[0];  // Store the lowest price seen so far
        int maxProfit = 0;      // Store the max profit found

        for (int i = 1; i < n; i++) {
            if (arr[i] < minPrice) {
                minPrice = arr[i];  // Update the minimum price
            } else {
                int profit = arr[i] - minPrice;
                maxProfit = max(maxProfit, profit); // Update max profit
            }
        }

        return maxProfit;
    }
};
