/*
Problem: Move All Zeroes to End of Array
LeetCode: 283
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)

DESCRIPTION:
Move all 0's to the end of array while maintaining relative order of non-zero elements.
Use two pointers: one for reading, one for writing non-zero elements.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1. UNDERSTAND + INPUT
    vector<int> arr = {0, 1, 0, 3, 12};
    
    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    // 2. PLAN: Two Pointers
    // j = position to place next non-zero element
    // i = we scan the whole array
    
    // 3. CODE: CORE LOGIC
    int j = 0; // write pointer
    for(int i = 0; i < arr.size(); i++) { // read pointer
        if(arr[i]!= 0) {
            swap(arr[i], arr[j]); // put non-zero at j position
            j++;
        }
    }

    // 4. DRY RUN: [0,1,0,3,12] -> [1,3,12,0,0]
    // 5. COMPLEXITY: Time O(n), Space O(1)

    cout << "Array after moving zeroes: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
