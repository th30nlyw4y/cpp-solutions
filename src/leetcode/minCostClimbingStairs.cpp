//
// Created by Petr on 21/04/2023.
//
// https://leetcode.com/problems/min-cost-climbing-stairs/

#include <vector>
#include <iostream>

using namespace std;

int minCostClimbingStairs(vector<int> &cost) {
    if (cost.size() == 2) { return min(cost[0], cost[1]); }
    int tmp;
    int prevPrevCost = cost[0], prevCost = cost[1];
    for (int i = 2; i < cost.size(); i++) {
        tmp = prevCost;
        prevCost = cost[i] + min(prevCost, prevPrevCost);
        prevPrevCost = tmp;
    }
    return min(prevCost, prevPrevCost);
}
