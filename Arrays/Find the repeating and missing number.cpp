class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n = nums.size();

        long long S = n * (n + 1) / 2;
        long long Sq = n * (n + 1) * (2 * n + 1) / 6;

        long long S_actual = 0, Sq_actual = 0;

        for (long long num : nums) {
            S_actual += num;
            Sq_actual += (long long)num * num;
        }

        long long diff = S_actual - S; // x - y
        long long squareDiff = Sq_actual - Sq; // x^2 - y^2

        long long sum = squareDiff / diff; // x + y

        long long x = (diff + sum) / 2;
        long long y = x - diff;

        return {(int)x, (int)y};
    }
};
