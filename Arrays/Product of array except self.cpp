#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n, 1);  // product of elements before i
    vector<int> suffix(n, 1);  // product of elements after i
    vector<int> answer(n);

    // Build prefix products
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // Build suffix products
    for (int i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // Multiply prefix and suffix for each index
    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    return answer;
}

int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> result = productExceptSelf(nums);

    cout << "Product except self: ";
    for (int x : result) cout << x << " ";
    return 0;
}
