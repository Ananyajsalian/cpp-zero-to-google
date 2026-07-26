/*
Problem 2: Valid Anagram
LeetCode: 242
Date: 26 July 2026
Approach: Frequency HashMap
Time: O(n)
Space: O(26) = O(1)
*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    // If lengths are different, can't be anagram
    if(s.length()!= t.length()) {
        return false;
    }

    unordered_map<char, int> freq;

    // Count frequency of chars in s
    for(char c : s) {
        freq[c]++;
    }

    // Decrease frequency for chars in t
    for(char c : t) {
        freq[c]--;
        // If any char goes negative, t has extra char
        if(freq[c] < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1 = "anagram", t1 = "nagaram";
    string s2 = "rat", t2 = "car";

    cout << "Input: s = \"anagram\", t = \"nagaram\"" << endl;
    cout << "Output: " << (isAnagram(s1, t1)? "true" : "false") << endl;
    // Output: true

    cout << "Input: s = \"rat\", t = \"car\"" << endl;
    cout << "Output: " << (isAnagram(s2, t2)? "true" : "false") << endl;
    // Output: false

    return 0;
}
