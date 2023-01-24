//
// Created by Petr on 24/01/2023.
//
// https://leetcode.com/problems/valid-mountain-array/

#include <vector>

using namespace std;

bool validMountainArray(vector<int> &arr) {
    if (arr.size() < 3 || arr[0] > arr[1] || arr[arr.size() - 2] < arr[arr.size() - 1]) return false;
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        bool lInc = (arr[l] < arr[l + 1]), rInc = (arr[r - 1] > arr[r]);
        if (!(lInc || rInc)) break;
        l += lInc;
        r -= rInc;
    }
    return l == r;
}
