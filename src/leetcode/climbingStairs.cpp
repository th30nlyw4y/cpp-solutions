//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/climbing-stairs/

int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    int prevSum = 2, prevPrevSum = 1, tmp;
    for (int i = 3; i <= n; i++) {
        tmp = prevSum;
        prevSum += prevPrevSum;
        prevPrevSum = tmp;
    }
    return prevSum;
}
