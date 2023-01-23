//
// Created by Petr on 22/01/2023.
//
// https://leetcode.com/problems/merge-sorted-array/

#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int r1 = m - 1, r2 = n - 1, i = nums1.size() - 1;
    while (r2 >= 0) {
        if (r1 >= 0 && nums1[r1] > nums2[r2]) {
            nums1[i] = nums1[r1];
            r1--;
        } else {
            nums1[i] = nums2[r2];
            r2--;
        }
        i--;
    }
}
