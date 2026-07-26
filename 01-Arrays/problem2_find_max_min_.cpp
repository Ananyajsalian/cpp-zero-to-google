#include <iostream>
#include <vector>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

// Problem 2: Find Max and Min in Array
// Time: O(n) | Space: O(1)

pair<int, int> findMaxMin(vector<int>& arr) {
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    
    return {maxVal, minVal};
}

int main() {
    vector<int> arr = {3, 5, 1, 8, -2, 7};
    
    pair<int, int> result = findMaxMin(arr);
    
    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    cout << "Max = " << result.first << endl;
    cout << "Min = " << result.second << endl;
    
    return 0;
}
