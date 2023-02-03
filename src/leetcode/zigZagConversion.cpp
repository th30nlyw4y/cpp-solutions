//
// Created by Petr on 17/01/2023.
//
// https://leetcode.com/problems/zigzag-conversion/

#include <string>

using namespace std;

string convert(string s, int numRows) {
    string ans;
    if (numRows < 2) return s;
    int baseShift = 2 * (numRows - 1);
    for (int row = 0; row < numRows; row++) {
        int intermediateShift = 2 * (numRows - row - 1);
        for (int i = row; i < s.size(); i += baseShift) {
            ans += s[i];
            if (intermediateShift < baseShift && intermediateShift > 0 && i + intermediateShift < s.size()) {
                ans += s[i + intermediateShift];
            }
        }
    }
    return ans;
}