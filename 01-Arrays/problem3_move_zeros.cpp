#include <iostream>
#include <vector>
using namespace std;

// Problem 3: Move all zeros to end of array
// Time: O(n) | Space: O(1)
// Approach: Two pointers. 'index' tracks position for next non-zero

void moveZeros(vector<int>& arr) {
    int index = 0; // position to place next non-zero element
    
    // Move all non-zero elements to front
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i]!= 0) {
            arr[index] = arr[i];
            index++;
        }
    }
    
    // Fill remaining positions with zeros
    while (index < arr.size()) {
        arr[index] = 0;
        index++;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    
    cout << "Before: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    moveZeros(arr);
    
    cout << "After: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}
