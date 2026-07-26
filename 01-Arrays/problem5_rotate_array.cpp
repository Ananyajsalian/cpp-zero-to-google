#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 5: Rotate Array by K steps
// Time: O(n) | Space: O(1)
// Approach: Reverse whole array, then reverse first k, then reverse rest

void rotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // handle k > n
    
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    
    cout << "Before: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    rotate(arr, k);
    
    cout << "After rotating by " << k << ": ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}
