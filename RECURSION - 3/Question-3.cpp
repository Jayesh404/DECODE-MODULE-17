#include <bits/stdc++.h>
using namespace std;

void generateAlternateArrays(vector<int> &arr1, vector<int> &arr2, int i, int j, vector<int> &temp, bool isFromA) {
    // Print the current array configuration when it's turn to add from arr2 and it's not the first element
    if (!isFromA && !temp.empty()) {
        for (int num : temp) {
            cout << num << " ";
        }
        cout << endl;
    }

    if (isFromA) {
        // Trying to add elements from arr1
        for (int k = i; k < arr1.size(); ++k) {
            if (temp.empty() || arr1[k] > temp.back()) { // Ensure increasing order
                temp.push_back(arr1[k]);
                generateAlternateArrays(arr1, arr2, k + 1, j, temp, !isFromA); // Switch to arr2
                temp.pop_back(); // Backtrack
            }
        }
    } else {
        // Trying to add elements from arr2
        for (int k = j; k < arr2.size(); ++k) {
            if (temp.empty() || arr2[k] > temp.back()) { // Ensure increasing order
                temp.push_back(arr2[k]);
                generateAlternateArrays(arr1, arr2, i, k + 1, temp, !isFromA); // Switch to arr1
                temp.pop_back(); // Backtrack
            }
        }
    }
}

int main() {
    vector<int> arr1 = {10, 15, 25};
    vector<int> arr2 = {1, 5, 20, 30};
    vector<int> temp;  // Temporary vector to hold the current sequence
    generateAlternateArrays(arr1, arr2, 0, 0, temp, true); // Start with arr1
    return 0;
}


