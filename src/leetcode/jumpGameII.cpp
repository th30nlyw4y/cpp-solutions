//
// Created by Petr on 08/02/2023.
//
// https://leetcode.com/problems/jump-game-ii/

#include <vector>

using namespace std;

int jump(vector<int> &nums) {
    int ans = 0, l = 0, r = 0;
    while (r < nums.size() - 1) {
        int i = l, newR = 0;
        while (i <= r) {
            newR = max(newR, i + nums[i]);
            i++;
        }
        l = r + 1;
        r = newR;
        ans++;
    }
    return ans;
}