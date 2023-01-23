//
// Created by Petr on 08/01/2023.
//
// https://leetcode.com/problems/reverse-words-in-a-string-iii/

#include <string>

using namespace std;

string reverseWords(string s) {
    string ans;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ' || i == s.size() - 1) {
            if (i != s.size() - 1) {
                for (int j = i - 1; j >= 0 && s[j] != ' '; j--) ans += s[j];
                ans += ' ';
            } else {
                for (int j = i; j >= 0 && s[j] != ' '; j--) ans += s[j];
            }
        }
    }
    return ans;
}
