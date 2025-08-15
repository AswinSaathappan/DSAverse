#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findAllDuplicates(vector<int> &arr) {
    unordered_map<int, int> freq;
    vector<int> duplicates;

    // Count frequency of each element
    for (int num : arr) {
        freq[num]++;
    }

    // Collect elements that appear more than once
    for (auto &p : freq) {
        if (p.second > 1) {
            duplicates.push_back(p.first);
        }
    }

    return duplicates;
}

int main() {
    vector<int> v = {2, 3, 1, 3, 2, 4, 5, 2};
    vector<int> dups = findAllDuplicates(v);

    cout << "Duplicates are: ";
    for (int num : dups) {
        cout << num << " ";
    }
    return 0;
}
