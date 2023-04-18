//
// Created by Petr on 18/04/2023.
//
// https://leetcode.com/problems/merge-strings-alternately/

#include <string>

using namespace std;

string mergeAlternately(string word1, string word2) {
    string ans;
    int i1 = 0, i2 = 0;
    while (i1 < word1.size() || i2 < word2.size()) {
        if (i1 < word1.size()) {
            ans += word1[i1++];
        }
        if (i2 < word2.size()) {
            ans += word2[i2++];
        }
    }
    return ans;
}
