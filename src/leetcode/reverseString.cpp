//
// Created by Petr on 08/01/2023.
//
// https://leetcode.com/problems/reverse-string/

#include <vector>

using namespace std;

void reverseString(vector<char> &s) {
    int L = s.size();
    for (int i = 0; i < L / 2; i++) {
        swap(s[i], s[L - 1 - i]);
    }
}