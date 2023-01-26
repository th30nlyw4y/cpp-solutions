//
// Created by Petr on 26/01/2023.
//
// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

#include <vector>

using namespace std;

vector<int> replaceElements(vector<int> &arr) {
    int len = arr.size() - 1, rMax = -1;
    for (int i = len; i >= 0; i--) {
        if (arr[i] > rMax) { swap(arr[i], rMax); } else { arr[i] = rMax; }
    }
    return arr;
}
