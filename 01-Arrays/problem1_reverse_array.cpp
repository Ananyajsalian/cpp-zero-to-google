
   /*
Problem: Reverse an Array
LeetCode: 189
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)

Reverse the array in-place without extra array.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    // Two Pointers Logic
    int left = 0;
    int right = arr.size() - 1;
    
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout << "Reversed Array: ";
    for(int x : arr) cout << x << " ";

    return 0;
}
