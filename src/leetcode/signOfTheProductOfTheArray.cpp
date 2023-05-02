//
// Created by Petr on 02/05/2023.
//
// https://leetcode.com/problems/sign-of-the-product-of-an-array/

#include <vector>

using namespace std;

int arraySign(vector<int> &nums) {
    int negCnt = 0;
    for (int n: nums) {
        if (n != 0) {
            negCnt += (n < 0);
        } else {
            return 0;
        }
    }
    return negCnt & 1 ? -1 : 1;
}
