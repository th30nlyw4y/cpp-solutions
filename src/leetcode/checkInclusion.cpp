//
// Created by Petr on 09/01/2023.
//
// https://leetcode.com/problems/permutation-in-string/

#include <string>

using namespace std;

bool checkInclusion(string s1, string s2) {
    if (s1.size() > s2.size()) return false;
    int cnt = 0;
    int s1f[26] = {};
    int s2f[26] = {};
    for (int i = 0; i < s1.size(); i++) {
        s1f[s1[i] - 'a']++;
        s2f[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (s1f[i] == s2f[i]) cnt++;
    }
    for (int i = 0; i < s2.size() - s1.size(); i++) {
        int l = s2[i] - 'a', r = s2[i + s1.size()] - 'a';
        if (cnt == 26) return true;
        s2f[r]++;
        if (s2f[r] == s1f[r]) {
            cnt++;
        } else if (s2f[r] == s1f[r] + 1) {
            cnt--;
        }
        s2f[l]--;
        if (s2f[l] == s1f[l]) {
            cnt++;
        } else if (s2f[l] == s1f[l] - 1) {
            cnt--;
        }
    }
    return cnt == 26;
}
