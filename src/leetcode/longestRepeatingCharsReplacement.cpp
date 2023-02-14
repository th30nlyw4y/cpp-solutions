//
// Created by Petr on 14/02/2023.
//
// https://leetcode.com/problems/longest-repeating-character-replacement/

#include <string>

using namespace std;

int characterReplacement(string s, int k) {
    int l = 0, maxFreq = 0, ans = 0;
    int lettersCnt[26] = {};

    for (int r = 0; r < s.size(); r++) {
        maxFreq = max(maxFreq, ++lettersCnt[s[r] - 'A']);
        if (r - l + 1 - maxFreq > k) {
            lettersCnt[s[l] - 'A']--;
            l++;
        }
        ans = r - l + 1;
    }
    return ans;
}
