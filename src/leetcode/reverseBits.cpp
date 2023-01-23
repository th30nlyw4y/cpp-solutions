//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/reverse-bits/

#include <cstdint>

uint32_t reverseBits(uint32_t n) {
    int l = 32;
    uint32_t ans = 0;
    while (l--) {
        ans <<= 1;
        if (n & 1) ans++;
        n >>= 1;
    }
    return ans;
}