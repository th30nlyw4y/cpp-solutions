//
// Created by Petr on 05/02/2023.
//
// https://leetcode.com/problems/find-all-anagrams-in-a-string/

#include <vector>
#include <string>

using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> ans;
    if (s.size() < p.size()) return ans;
    vector<int> pChars(26, 0), tmp(26, 0);

    for (int i = 0; i < p.size(); i++) {
        pChars[p[i] - 'a']++;
        tmp[s[i] - 'a']++;
    }
    if (pChars == tmp) { ans.push_back(0); }

    for (int i = 0; i < s.size() - p.size(); i++) {
        tmp[s[i] - 'a']--;
        tmp[s[i + p.size()] - 'a']++;
        if (pChars == tmp) { ans.push_back(i + 1); }
    }
    return ans;
}