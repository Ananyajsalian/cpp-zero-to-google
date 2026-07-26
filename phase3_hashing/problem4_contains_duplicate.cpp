/*
Problem 4: Contains Duplicate
LeetCode: 217
Date: 26 Jul 2026
Approach: Hashing with unordered_set
Time: O(N)
Space: O(N)

Check if any value appears at least twice in the array.
Return true if any value appears at least twice, else false.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 1};

    cout << "Array: ";
    for(int x : nums) cout << x << " ";
    cout << endl;

    // Hashing Logic
    unordered_set<int> seen;

    for(int num : nums) {
        // if we have seen this number before, it's a duplicate
        if(seen.find(num)!= seen.end()) {
            cout << "true" << endl;
            return 0;
        }
        // otherwise add it to the set
        seen.insert(num);
    }

    cout << "false" << endl;
    return 0;
}
