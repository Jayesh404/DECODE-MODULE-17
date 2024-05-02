#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void subsetsWithDup(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, int idx) {
    if (idx == nums.size()) {
        ans.push_back(temp);
        return;
    }
    // not taken path
    int i = idx + 1;
    while (i < nums.size() && nums[i] == nums[i - 1]) {
        ++i;
    }
    subsetsWithDup(nums, ans, temp, i);

    // taken path
    temp.push_back(nums[idx]);
    subsetsWithDup(nums, ans, temp, idx + 1);
    temp.pop_back();
}

int main() {
    // Example usage
    vector<int> nums = {1, 2, 2}; // Input array
    vector<vector<int>> ans;      // To store all subsets
    vector<int> temp;             // Temporary vector to hold current subset

    sort(nums.begin(), nums.end()); // Sort the array to handle duplicates

    subsetsWithDup(nums, ans, temp, 0);

    // Print all subsets
    cout << "All subsets are:" << endl;
    for (const auto &subset : ans) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
