/*
Problem: Remove Duplicates from Sorted Array
LeetCode: 26
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)

DESCRIPTION:
Remove duplicates from sorted array in-place.
Return the new length. Only keep unique elements at the beginning.
Use two pointers to overwrite duplicates.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1. UNDERSTAND + INPUT
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    
    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    // 2. PLAN: Two Pointers
    // j = position for next unique element
    // i = scan array to find new unique elements
    
    // 3. CODE: CORE LOGIC
    if(arr.size() == 0) return 0;
    
    int j = 1; // first element is always unique
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i]!= arr[j-1]) { // found new unique element
            arr[j] = arr[i]; // place it at j
            j++;
        }
    }
    
    int newLength = j;

    // 4. DRY RUN: [0,0,1,1,2,3,4] -> newLength = 5
    // 5. COMPLEXITY: Time O(n), Space O(1)

    cout << "New Length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
    
