#include <iostream>
#include <vector>
using namespace std;

// Problem 4: Remove Duplicates from Sorted Array
// Time: O(n) | Space: O(1)
// Approach: Slow pointer tracks unique elements

int removeDuplicates(vector<int>& arr) {
    if (arr.size() == 0) return 0;
    
    int slow = 0; // position for next unique element
    
    for (int fast = 1; fast < arr.size(); fast++) {
        if (arr[fast]!= arr[slow]) {
            slow++;
            arr[slow] = arr[fast];
        }
    }
    
    return slow + 1; // new length
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4};
    
    cout << "Before: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    int newLen = removeDuplicates(arr);
    
    cout << "After: ";
    for (int i = 0; i < newLen; i++) cout << arr[i] << " ";
    cout << endl;
    cout << "New Length = " << newLen << endl;
    
    return 0;
}
