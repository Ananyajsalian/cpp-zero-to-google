/*
Problem 5: Valid Anagram
LeetCode: 242
Date: 26 July 2026
Approach: Frequency Array - Count characters
Time: O(n)
Space: O(1) - fixed size array of 26
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length()!= t.length()) return false;
    
    vector<int> freq(26, 0); // for 'a' to 'z'
    
    // Step 1: Count characters in s, +1
    for(char c : s) {
        freq[c - 'a']++;
    }
    
    // Step 2: Subtract characters in t, -1
    for(char c : t) {
        freq[c - 'a']--;
        if(freq[c - 'a'] < 0) return false; // t has extra char
    }
    
    return true;
}

int main() {
    string s1 = "anagram", t1 = "nagaram";
    string s2 = "rat", t2 = "car";
    
    cout << boolalpha;
    cout << isAnagram(s1, t1) << endl; // true
    cout << isAnagram(s2, t2) << endl; // false
    return 0;
}
