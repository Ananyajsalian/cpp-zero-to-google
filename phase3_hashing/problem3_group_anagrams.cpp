/*
Problem 3: Group Anagrams
LeetCode: 49
Date: 26 July 2026
Approach: HashMap - Sorted String as Key
Time: O(N * K log K) N = number of strings, K = max length of string
Space: O(N * K)
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp; // key: sorted string, value: list of anagrams

    for(int i = 0; i < strs.size(); i++) {
        string s = strs[i];
        string key = s;
        sort(key.begin(), key.end()); // "eat" -> "aet"

        // add original string to the group of its sorted key
        mp[key].push_back(s);
    }

    // collect all groups into result
    vector<vector<string>> result;
    for(auto &p : mp) {
        result.push_back(p.second);
    }
    return result;
}

// Driver code for local testing
int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans = groupAnagrams(strs);

    for(auto &group : ans) {
        cout << "[ ";
        for(string &s : group) {
            cout << s << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
