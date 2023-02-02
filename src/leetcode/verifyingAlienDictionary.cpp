//
// Created by Petr on 02/02/2023.
//
// https://leetcode.com/problems/verifying-an-alien-dictionary/

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool isAlienSorted(vector<string> &words, string order) {
    if (words.size() == 1) return true;
    unordered_map<char, int> a;
    for (int i = 0; i < order.size(); i++) {
        a[order[i]] = i;
    }
    for (int i = 1; i < words.size(); i++) {
        if (words[i] == words[i - 1]) continue;
        int j = 0;
        int minLen = min(words[i].size(), words[i - 1].size());
        while (j < minLen) {
            if (a[words[i][j]] < a[words[i - 1][j]]) return false;
            if (a[words[i][j]] > a[words[i - 1][j]]) break;
            j++;
        }
        if (j == minLen) return words[i].size() > words[i - 1].size();
    }
    return true;
}
