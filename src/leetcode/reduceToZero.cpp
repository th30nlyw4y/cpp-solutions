//
// Created by Petr on 11/02/2023.
//
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

int numberOfSteps(int num) {
    int steps = 0;
    while (num > 0) {
        if (num & 1) { num--; } else { num >>= 1; }
        steps++;
    }
    return steps;
}
