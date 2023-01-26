//
// Created by Petr on 22/01/2023.
//
// https://leetcode.com/problems/remove-element/

#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val) {
    int lastInserted = 0;
    for (int num: nums) {
        if (num != val) nums[lastInserted++] = num;
    }
    return lastInserted;
}
