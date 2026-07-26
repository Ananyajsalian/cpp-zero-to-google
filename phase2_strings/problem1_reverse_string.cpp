/*
Problem 1: Reverse String
LeetCode: 344
Date: 26 July 2026
Approach: Two Pointers
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0, right = s.size() - 1;
    while(left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for(char c : s) cout << c; // output: olleh
    cout << endl;
    return 0;
}
