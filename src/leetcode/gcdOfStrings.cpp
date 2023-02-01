//
// Created by Petr on 01/02/2023.
//
// https://leetcode.com/problems/greatest-common-divisor-of-strings/

#include <string>

using namespace std;

string gcdOfStrings(string str1, string str2) {
    string ans = "", tmp;
    for (int i = 0; i < min(str1.size(), str2.size()); i++) {
        if (str1[i] == str2[i]) {
            tmp += str1[i];
        }
        if (tmp.size() && str1.size() % tmp.size() == 0 && str2.size() % tmp.size() == 0) ans = tmp;
    }
    for (int i = 0; i < max(str1.size(), str2.size()); i++) {
        if (ans.size() && (str1[i % str1.size()] != ans[i % ans.size()] || str2[i % str2.size()] != ans[i % ans.size()])) return "";
    }
    return ans;
}
