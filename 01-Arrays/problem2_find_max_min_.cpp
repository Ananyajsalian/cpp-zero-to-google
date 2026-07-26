/*
Problem: Find Maximum and Minimum Element in Array
LeetCode: 53 / GFG: Maximum and Minimum in an Array
Approach: Single Pass
Time Complexity: O(n)
Space Complexity: O(1)

DESCRIPTION:
Find the maximum and minimum element in the array in one traversal.
We maintain two variables max and min and update them while scanning.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1. UNDERSTAND + INPUT
    vector<int> arr = {3, 5, 1, 8, -2, 7};
    
    cout << "Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    // 2. PLAN: Single Pass - track max and min together
    // 3. CODE: CORE LOGIC
    int max = arr[0]; // assume first element is max
    int min = arr[0]; // assume first element is min
    
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] > max) {
            max = arr[i]; // update max
        }
        if(arr[i] < min) {
            min = arr[i]; // update min
        }
    }

    // 4. DRY RUN: [3,5,1,8,-2,7] -> max=8, min=-2
    // 5. COMPLEXITY: Time O(n), Space O(1)

    cout << "Maximum Element: " << max << endl;
    cout << "Minimum Element: " << min << endl;

    return 0;
}
  
