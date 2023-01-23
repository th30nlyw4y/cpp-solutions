//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/number-of-1-bits/

#include <cstdint>

int hammingWeight(uint32_t n) {
    int cnt = 0;
    while (n) {
        cnt += n & 1;
        n>>=1;
    }
    return cnt;
}
