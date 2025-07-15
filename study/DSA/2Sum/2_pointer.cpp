#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> indexedNums; 
    
    for (int i = 0; i < nums.size(); i++) {
        indexedNums.push_back({nums[i], i});
    }
    sort(indexedNums.begin(), indexedNums.end());

    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = indexedNums[left].first + indexedNums[right].first;
        
        if (sum == target) {
            return {indexedNums[left].second, indexedNums[right].second}; 
        } else if (sum < target) {
            left++;  
        } else {
            right--;  
        }
    }

    return {};  
}

int main() {
    vector<int> nums = {2, 7, 11, 15};  
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
