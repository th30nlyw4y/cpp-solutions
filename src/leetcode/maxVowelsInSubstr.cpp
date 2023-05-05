//
// Created by Petr on 05/05/2023.
//
// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

#include <string>
#include <unordered_set>

using namespace std;

int maxVowels(string s, int k) {
    int ans = 0, curr;
    int l = 0, r = k - 1;
    unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i <= r; i++) {
        if (vowels.find(s[i]) != vowels.end()) { ans++; }
    }
    curr = ans;
    while (r < s.size()) {
        if (vowels.find(s[l++]) != vowels.end()) { curr--; }
        if (vowels.find(s[++r]) != vowels.end()) { curr++; }
        ans = max(ans, curr);
    }
    return ans;
}
