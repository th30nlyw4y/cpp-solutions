//
// Created by Petr on 18/01/2023.
//
// https://leetcode.com/problems/bag-of-tokens/

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int bagOfTokensScore(vector<int> &tokens, int power) {
    sort(tokens.begin(), tokens.end());
    int ans = 0, l = 0, r = tokens.size() - 1;
    while (l <= r) {
        if (power >= tokens[l]) {
            power -= tokens[l];
            ans++;
            l++;
        } else if (ans > 0 && (r - l) > 1) {
            power += tokens[r];
            ans--;
            r--;
        } else {
            break;
        }
    }
    return ans;
}
