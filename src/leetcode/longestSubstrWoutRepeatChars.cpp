//
// Created by Petr on 09/01/2023.
//
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include <unordered_map>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> occurrences;
    int l = 0, ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (occurrences.count(s[i]) > 0) {
            ans = max(ans, i - l);
            l = max(l, occurrences[s[i]] + 1);
        }
        occurrences[s[i]] = i;
    }
    return max(ans, int(s.size()) - l);
}
