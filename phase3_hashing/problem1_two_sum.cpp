/*
Problem 1: Two Sum
LeetCode: 1
Date: 26 July 2026
Approach: HashMap - One Pass
Time: O(n)
Space: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // stores: value -> index

    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        // if complement already exists in map
        if(mp.find(complement)!= mp.end()) {
            return {mp[complement], i};
        }

        // store current number and index
        mp[nums[i]] = i;
    }
    return {-1, -1}; // no solution
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "Input: nums = [2,7,11,15], target = 9" << endl;
    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
