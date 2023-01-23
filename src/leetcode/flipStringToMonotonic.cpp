//
// Created by Petr on 17/01/2023.
//
// https://leetcode.com/problems/flip-string-to-monotone-increasing/

#include <string>

using namespace std;

int minFlipsMonoIncr(string s) {
    int ans = 0, tmp = 0;
    for (char c: s) {
        if (c == '0') { ans = min(tmp, ans + 1); } else { tmp++; }
    }
    return ans;
}
