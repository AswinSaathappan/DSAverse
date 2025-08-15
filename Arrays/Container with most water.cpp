#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        // Width between lines
        int width = right - left;
        // Height is the smaller of the two lines
        int minHeight = min(height[left], height[right]);
        // Calculate area
        int area = width * minHeight;
        maxWater = max(maxWater, area);

        // Move the pointer at the shorter line
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Max water: " << maxArea(height);
    return 0;
}
