//
// Created by Petr on 24/01/2023.
//
// https://leetcode.com/problems/check-if-n-and-its-double-exist/

#include <vector>
#include <unordered_set>

using namespace std;

bool checkIfExist(vector<int> &arr) {
    unordered_set<int> found;
    for (int num: arr) {
        if (found.count(num * 2) || (found.count(num / 2) && num % 2 == 0)) return true;
        found.insert(num);
    }
    return false;
}
