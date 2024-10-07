#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> indexedNums;  // Pair each number with its original index
    
    for (int i = 0; i < nums.size(); i++) {
        indexedNums.push_back({nums[i], i});
    }

    // Sort based on the numbers (not indices)
    sort(indexedNums.begin(), indexedNums.end());

    // Two pointers technique
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = indexedNums[left].first + indexedNums[right].first;
        
        if (sum == target) {
            return {indexedNums[left].second, indexedNums[right].second};  // Return original indices
        } else if (sum < target) {
            left++;  // Move the left pointer right
        } else {
            right--;  // Move the right pointer left
        }
    }

    return {};  // No solution found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};  // Example input
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
