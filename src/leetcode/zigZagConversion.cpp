//
// Created by Petr on 17/01/2023.
//
// https://leetcode.com/problems/zigzag-conversion/

#include <string>

using namespace std;

string convert(string s, int numRows) {
    string ans;
    if (numRows < 2) return s;
    int lBase = 2 * (numRows - 1);
    for (int row = 0; row < numRows; row++) {
        int lTmp = 2 * (numRows - row - 1);
        for (int i = row; i < s.size(); i += lBase) {
            ans += s[i];
            if (lTmp < lBase && lTmp > 0 && i + lTmp < s.size()) {
                ans += s[i + lTmp];
            }
        }
    }
    return ans;
}

int main() {
    cout << convert("A", 1);
}
