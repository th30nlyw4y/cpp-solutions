//
// Created by Petr on 08/01/2023.
//
// https://leetcode.com/probl944ems/delete-columns-to-make-sorted/

#include <vector>
#include <string>

using namespace std;


int minDeletionSize(vector<string> &strs) {
    int ans = 0;
    int strSize = strs[0].size();
    for (int i = 0; i < strSize; i++) {
        for (int j = 1; j < strs.size(); j++) {
            if (strs[j][i] < strs[j - 1][i]) {
                ans++;
                break;
            }
        }
    }
    return ans;
}
