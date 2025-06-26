class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0;
        long long power = n; // use long long to avoid overflow

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        for (int i = 0; i < power; i++) {
            result *= x;
        }

        return result;
    }
};
