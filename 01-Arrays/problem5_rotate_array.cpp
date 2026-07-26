/*
Problem: Rotate Array by K Steps
LeetCode: 189
Approach: Reverse Method / 3 Reversals
Time Complexity: O(n)
Space Complexity: O(1)

DESCRIPTION:
Rotate the array to the right by k steps.
We do it in-place using 3 reversals:
1. Reverse whole array
2. Reverse first k elements  
3. Reverse remaining n-k elements
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1. UNDERSTAND + INPUT
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3; // rotate by 3 steps
    k = k % arr.size(); // handle k > n
    
    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    cout << "Rotate by k = " << k << endl;

    // 2. PLAN: Reverse Method - 3 reversals
    
    // 3. CODE: CORE LOGIC
    // Step 1: Reverse entire array
    reverse(arr.begin(), arr.end());
    
    // Step 2: Reverse first k elements
    reverse(arr.begin(), arr.begin() + k);
    
    // Step 3: Reverse remaining elements
    reverse(arr.begin() + k, arr.end());

    // 4. DRY RUN: [1,2,3,4,5,6,7] k=3 
    // -> [7,6,5,4,3,2,1] -> [5,6,7,4,3,2,1] -> [5,6,7,1,2,3,4]
    // 5. COMPLEXITY: Time O(n), Space O(1)

    cout << "Array after rotation: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
    
