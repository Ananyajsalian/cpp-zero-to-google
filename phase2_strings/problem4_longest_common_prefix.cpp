/*
Problem 4: Longest Common Prefix
LeetCode: 14
Date: 26 July 2026
Approach: Horizontal Scanning - Compare all strings char by char
Time: O(S) where S = sum of all characters
Space: O(1)
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()) return "";
    
    string prefix = strs[0]; // take first string as initial prefix
    
    for(int i = 1; i < strs.size(); i++) {
        // Keep reducing prefix until it matches start of strs[i]
        while(strs[i].find(prefix)!= 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if(prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};
    
    cout << "\"" << longestCommonPrefix(strs1) << "\"" << endl; // "fl"
    cout << "\"" << longestCommonPrefix(strs2) << "\"" << endl; // ""
    return 0;
}
