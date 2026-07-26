#include <iostream>
#include <vector>
using namespace std;

// Problem 1: Reverse an Array
// Time: O(n) | Space: O(1)
// Approach: Two Pointers

void reverseArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    reverseArray(arr);
    
    cout << "Reversed Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}
