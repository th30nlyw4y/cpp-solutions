//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/power-of-two/

bool isPowerOfTwo(int n) {
    return n > 0 && !(n & n - 1);
}