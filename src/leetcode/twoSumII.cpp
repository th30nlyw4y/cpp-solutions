//
// Created by Petr on 08/01/2023.
//
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target) {
    int l = 0, r = (int) numbers.size() - 1;
    while (l < r) {
        int sum = numbers[l] + numbers[r];
        if (sum != target) {
            if (sum > target) { r--; } else { l++; }
        } else {
            break;
        }
    }
    return vector<int>{l+1, r+1};
}