/*
Problem 2: Valid Palindrome
LeetCode: 125
Date: 26 July 2026
Approach: Two Pointers + Character Filtering
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <string>
#include <cctype> // for tolower, isalnum
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    
    while(left < right) {
        // Skip non-alphanumeric characters
        while(left < right &&!isalnum(s[left])) left++;
        while(left < right &&!isalnum(s[right])) right--;
        
        // Compare characters ignoring case
        if(tolower(s[left])!= tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    
    cout << boolalpha; // prints true/false instead of 1/0
    cout << isPalindrome(s1) << endl; // output: true
    cout << isPalindrome(s2) << endl; // output: false
    return 0;
}
