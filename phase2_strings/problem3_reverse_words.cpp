/*
Problem 3: Reverse Words in a String
LeetCode: 151
Date: 26 July 2026
Approach: Split words, Reverse order, Remove extra spaces
Time: O(n)
Space: O(n)
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

string reverseWords(string s) {
    vector<string> words;
    string word = "";
    
    // Step 1: Extract words and skip extra spaces
    for(int i = 0; i < s.size(); i++) {
        if(s[i]!= ' ') {
            word += s[i];
        } else if(word!= "") {
            words.push_back(word);
            word = "";
        }
    }
    if(word!= "") words.push_back(word); // last word
    
    // Step 2: Reverse the vector of words
    reverse(words.begin(), words.end());
    
    // Step 3: Join words with single space
    string result = "";
    for(int i = 0; i < words.size(); i++) {
        result += words[i];
        if(i!= words.size() - 1) result += " ";
    }
    
    return result;
}

int main() {
    string s1 = "the sky is blue";
    string s2 = " hello world ";
    string s3 = "a good example";
    
    cout << "\"" << reverseWords(s1) << "\"" << endl; // "blue is sky the"
    cout << "\"" << reverseWords(s2) << "\"" << endl; // "world hello"
    cout << "\"" << reverseWords(s3) << "\"" << endl; // "example good a"
    return 0;
}
